using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L2
{
    class Program
    {
        static void Main(string[] args)
        {
#if !DEBUG
            TextReader t_in = Console.In;
            TextWriter t_out = Console.Out;
            var new_in = new StreamReader("in.txt");
            var new_out = new StreamWriter("out.txt");
            Console.SetIn(new_in);
            Console.SetOut(new_out);
#else
            Console.WriteLine("Enter x, y, z: ");
#endif
            Point p = new Point();
            p.Load();
            p.Info();
#if !DEBUG
            Console.SetIn(t_in); new_in.Close();
            Console.SetOut(t_out); new_out.Close();
#else
            Console.ReadKey();
#endif
        }
    }
}
