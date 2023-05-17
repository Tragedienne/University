using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L4
{
    internal class Program
    {
        public static void Main()
        {
            var edition = new Edition[8];
            edition[0] = new Edition();
            edition[1] = new Edition("Offiсial", "Novogrodsky Valentin Yanovich", "russian");
            edition[2] = new Book();
            edition[3] = new Book(1987, 85, "USSR", Books.Hamlet, "Official", "Peshin Sergey Vladimirovich", "russian");
            edition[4] = new Magazin();
            edition[5] = new Magazin(2023, "adult", Magazins.Kalambur, "Official", "Dudik Alexander Mikhailovich", "german");
            edition[6] = new ElResource();
            edition[7] = new ElResource(2011, "public", ".en", ElResources.Site, "Scientific", "Stephen King", "en");
            //Console.BackgroundColor = ConsoleColor.Red;
            Console.ResetColor();
            for (var i = 0; i < 8; i++)
            {
                Console.WriteLine("-------------------------------------------------------------------------------------------------------");
                Console.WriteLine("Name: " + edition[i].GetType().Name);
                Console.WriteLine("Translate: " + edition[i].translate);
                Console.WriteLine("Info: " + edition[i].Info);
            }
            Console.ReadKey();
        }
    }
}
