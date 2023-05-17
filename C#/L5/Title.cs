using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L5
{

    public class Title : InOut
    {
        private string name;

        public Title()
        {
            name = "IT teacher";
        }

        public Title(string name)
        {
            this.name = name;
        }

        public string getName()
        {
            return name;
        }

        public void setName(string name)
        {
            this.name = name;
        }

        public void fill()
        {
            Console.WriteLine("\nTitle\nname(string):\n");
            name = Console.ReadLine();
        }

        public void toString()
        {
            Console.Write("\nTitle:\n" +
                    "Title = " + name + "\n");
        }
    }
}
