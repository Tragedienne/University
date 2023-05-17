using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace L1
{
    internal class Class1
    {
        static void Main(string[] args)
        {
            Console.Write("Enter file name without .txt: ");
            string File = Console.ReadLine();
            StreamWriter writer = new StreamWriter(File + ".txt");

            Random random= new Random();
            int N = random.Next(10, 100);

            writer.WriteLine(N);

            for(int i = 0; i < N; i++)
            {
                writer.Write("{0:F3} ", - 100000.0 + random.NextDouble() * 200000);
            }            
            writer.Close();                   

            StreamReader reader = new StreamReader(File + ".txt");

            int count = int.Parse(reader.ReadLine());
            string[] str_mas = reader.ReadLine().Split(' ');

            double[] mas = new double[str_mas.Length];
            for(int i = 0; i < count; i++)
            {
                mas[i] = double.Parse(str_mas[i]);
            }
            reader.Close();

            Console.Write("Enter file name without .txt: ");
            File = Console.ReadLine();
            writer = new StreamWriter(File + ".txt");

            var max = mas[0];
            for(int i =0; i < N; i++)
            {
                if (mas[i] > max)
                {
                    max = mas[i];
                }
            }

            var min = mas[0];
            for (int i = 0; i < N; i++)
            {
                if (mas[i] < min)
                {
                    min = mas[i];
                }
            }

            double avg = 0;
            for (int i = 0; i < N; i++)
            {
                avg += mas[i];
            }
            avg/= N;

            StringBuilder str = new StringBuilder();
            for (int i = 0; i < N; i++)
            {
                if (mas[i] > ((max + min) / 2))
                {
                    str.Append(mas[i] + "; ");
                }
            }           

            writer.WriteLine("1. Среднее арифметическое максимального и минимального элементов: {0:F3} ", (max + min)/2);
            writer.WriteLine("2. Среднее арифметическое всех элементов: {0:F3}", avg);
            writer.WriteLine("3. Все числа, которые больше среднего арифметического максимального и минимального элементов: " + str.ToString());
            writer.Close();

        }
    }
}
