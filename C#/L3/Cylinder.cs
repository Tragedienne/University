using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L3
{
    internal class Cylinder
    {
        private double R, H; 

        public Cylinder(double r, double h)
        {
            try
            {
                R = r;
                H = h;
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
            }
        }

        public Cylinder()
        {
            R = 2; H = 2;
            Console.WriteLine("Радиус по умолчанию: " + R + '\n' + "Высота по умолчанию: " + H);
        }

        public double GetV()
        {
            return Math.PI * Math.Pow(R, 2) * H;
        }

        public double GetS()
        {
            return 2 * Math.PI * R * H;
        }

        public static double GetV(double R, double H)
        {
            return Math.PI * Math.Pow(R, 2) * H;
        }

        public static double GetS(double R, double H)
        {
            return 2 * Math.PI * R * H;
        }

        public void Info()
        {
            Console.WriteLine("Радиус и высота цилиндра: " + R + ' '+ H);
            Console.WriteLine("Объем цилиндра: " + GetV());
            Console.WriteLine("Площадь поверхности цилиндра: " + GetS());
        }

        public void Load()
        {
            try 
            {
                R = Convert.ToDouble(Console.ReadLine());
                H = Convert.ToDouble(Console.ReadLine());
            }   
            catch (Exception e)
            {
                Console.WriteLine("Wrong type.");
            }
        }
    }
}