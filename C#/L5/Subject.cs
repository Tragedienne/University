using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L5
{
    public class Subject : InOut
    {
        private string discipline;

        public Subject()
        {
            discipline = "C#";
        }

        public Subject(string discipline)
        {
            this.discipline = discipline;
        }

        public string getDiscipline()
        {
            return discipline;
        }

        public void setDiscipline(string discipline)
        {
            this.discipline = discipline;
        }

        public void fill()
        {
            Console.WriteLine("\nSubject\ndiscipline(string):\n");
            discipline = Console.ReadLine();
        }

        public void toString()
        {
            Console.Write("\nSubject:\n" +
                    "Discipline = " + discipline + "\n");
        }
    }

}
