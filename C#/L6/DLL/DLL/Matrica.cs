namespace DLL
{
    public class Matrica
    {
        static int n, m;
        static double[,] matrica;

        static double[,] generate(int n)
        {
            Random random = new Random();
            var matr = new double[n, n];
            for (var i = 0; i < n; i++)
                for (var j = 0; j < n; j++)
                    matr[i, j] = random.NextDouble() * 10;
            return matr;
        }

        static bool out_file(string name, string text)
        {
            using (var writer = new StreamWriter(name))
            {
                try
                {
                    writer.Write(text);
                    return false;
                }
                catch (Exception e)
                {
                    return true;
                }
            }
        }

        static bool read(string name)
        {
            string[] lines;
            try
            {
                lines = File.ReadAllLines(name);
            }
            catch
            {
                n = 5;
                var str = "";
                var matr = generate(n);
                for (var i = 0; i < n; i++)
                {
                    var len = n - 1;
                    for (var j = 0; j < len; j++)
                        str += matr[i, j] + " ";
                    str += matr[i, len] + "\n";
                }
                out_file(name, str);
                lines = File.ReadAllLines(name);
            }
            n = lines.Length;
            matrica = new double[n, n];
            for (var i = 0; i < n; i++)
            {
                var s = lines[i].Split(' ');
                m = s.Length;
                if (n != m)
                    return true;
                try
                {
                    for (var j = 0; j < m; j++)
                        matrica[i, j] = double.Parse(s[j]);
                }
                catch (Exception e)
                {
                    Console.WriteLine(e);
                    return true;
                }
            }
            return false;
        }

        public static bool function(string input1, string input2, string output1)
        {
            if (read(input1))
                return true;
            double s1 = 0;
            for (var i = 0; i < n; i++)
                s1 += matrica[i, i] + matrica[i, n - i - 1];
            if (n % 2 != 0)
                s1 -= matrica[n / 2, n / 2];
            if (read(input2))
                return true;
            double s2 = 0;
            for (var i = 0; i < n; i++)
                s2 += matrica[i, i] + matrica[i, n - i - 1];
            if (n % 2 != 0)
                s2 -= matrica[n / 2, n / 2];
            if (out_file(output1, "The sum of the diagonal elements of the first matrix: " + s1 + '\n' +
                "The sum of the diagonal elements of the second matrix: " + s2))
                return true;
            return false;
        }
    }
}
