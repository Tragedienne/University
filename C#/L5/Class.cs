using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L5
{
    public class Class : InOut
    {
        private int classNumber;

        public Class()
        {
            classNumber = 0;
        }

        public Class(int classNumber)
        {
            this.classNumber = classNumber;
        }

        public int getClassNumber()
        {
            return classNumber;
        }

        public void setClassNumber(int classNumber)
        {
            this.classNumber = classNumber;
        }

        public void fill()
        {
            Console.WriteLine("\nClass\nclassNumber(int):\n");
            while (true)
            {
                try
                {
                    classNumber = int.Parse(Console.ReadLine());
                    break;
                }
                catch (Exception e)
                {
                    Console.WriteLine(e);
                }
            }
        }

        public void toString()
        {
            Console.Write("\nClass:\n" +
                    "Class_Number = " + classNumber + "\n");
        }
    }

}
