using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.PortableExecutable;
using System.Text;
using System.Threading.Tasks;

namespace L1_2
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Console.Write("Enter file name without .txt: ");
            string File = Console.ReadLine();
            StreamWriter writer = new StreamWriter(File + ".txt");

            Random random = new Random();
            int N = random.Next(5, 10);
            int M = random.Next(5, 10);

            writer.WriteLine(N);
            writer.WriteLine(M);
            writer.Close();

            StreamReader reader = new StreamReader(File + ".txt");
            N = int.Parse(reader.ReadLine());
            M = int.Parse(reader.ReadLine());
            reader.Close();

            Console.Write("Enter file name without .txt: ");
            File = Console.ReadLine();
            writer = new StreamWriter(File + ".txt");

            int[,] mas = new int[N, M];
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    mas[i, j] = random.Next(-1000, 1000);
                    writer.Write(mas[i, j] + "\t");
                }
                writer.WriteLine();
            }
            writer.WriteLine();

            double[] avg_mas = new double[M];
            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    avg_mas[i] += mas[j, i];
                }
                avg_mas[i] /= N;
                writer.WriteLine("Среднее арифметическое " + (i + 1) + " стобца: {0:F3}", avg_mas[i]);
            }

            writer.WriteLine();

            char[,] char_mas = new char[N, M];
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    if (mas[i, j] < avg_mas[j])
                    {
                        char_mas[i, j] = 'x';
                    }
                    else
                    {
                        char_mas[i, j] = 'y';
                    }
                    writer.Write(char_mas[i, j] + "\t");
                }
                writer.WriteLine();
            }

            writer.Close();
        }
    }
}
