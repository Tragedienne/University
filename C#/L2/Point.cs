using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.PortableExecutable;
using System.Text;
using System.Threading.Tasks;

namespace L2
{
    class Point
    {
        public double x, y, z;

        public double GetToPoint()
        {
            double x1, y1, z1;
#if DEBUG
            Console.WriteLine("Enter x1, y1, z1: ");
            while (true)
            {
                try
                {
                    x1 = Convert.ToDouble(Console.ReadLine());
                    y1 = Convert.ToDouble(Console.ReadLine());
                    z1 = Convert.ToDouble(Console.ReadLine());
                    break;
                }
                catch (Exception e)
                {
                    Console.WriteLine("Wrong type. Try one more time.");
                }
            }
#else
            try
            {
                x1 = Convert.ToDouble(Console.ReadLine());
                y1 = Convert.ToDouble(Console.ReadLine());
                z1 = Convert.ToDouble(Console.ReadLine());
            }
            catch (Exception e)
            {
                Console.WriteLine("Wrong type.");
                x1 = 0; y1 = 0; z1 = 0;
            }
            Console.WriteLine("Координаты x1, y1, z1: " + x1 + " " + y1 + " " + z1);
#endif
            return Math.Sqrt(Math.Pow(x1 - x, 2) + Math.Pow(y1 - y, 2) + Math.Pow(z1 - z, 2));
        }

        public double GetToNull()
        {
            return Math.Sqrt(Math.Pow(x, 2) + Math.Pow(y, 2) + Math.Pow(z, 2));
        }

        public void Info()
        {
            Console.WriteLine("Координыты точки в пространстве: " + x + " " + y + " " + z);
            Console.WriteLine("Расстояние до введенной пользователем точки: " + GetToPoint());
            Console.WriteLine("Расстояние до начала координат: " + GetToNull());
        }

        public void Load()
        {
            x = Convert.ToDouble(Console.ReadLine());
            y = Convert.ToDouble(Console.ReadLine());
            z = Convert.ToDouble(Console.ReadLine());
        }
    }
}
