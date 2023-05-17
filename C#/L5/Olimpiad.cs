using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L5
{
    public class Olympiad : InOut
    {
        private string name;
        private DateTime date;
        private int result;
        private Teacher teacher;
        private Subject subject;
        private Pupil pupil;

        public Olympiad()
        {
            name = "Kenguru";
            date = new DateTime(0);
            result = 0;
            teacher = new Teacher();
            subject = new Subject();
            pupil = new Pupil();
        }

        public Olympiad(string name, DateTime date, int result, Teacher teacher, Subject subject, Pupil pupil)
        {
            this.name = name;
            this.date = date;
            this.result = result;
            this.teacher = teacher;
            this.subject = subject;
            this.pupil = pupil;
        }

        public string getName()
        {
            return name;
        }

        public void setName(string name)
        {
            this.name = name;
        }

        public DateTime getDate()
        {
            return date;
        }

        public void setDate(DateTime date)
        {
            this.date = date;
        }

        public int getResult()
        {
            return result;
        }

        public void setNumber(int result)
        {
            this.result = result;
        }

        public Teacher getTeacher()
        {
            return teacher;
        }

        public void setTeacher(Teacher teacher)
        {
            this.teacher = teacher;
        }

        public Subject getSubject()
        {
            return subject;
        }

        public void setSubject(Subject subject)
        {
            this.subject = subject;
        }

        public Pupil getPupil()
        {
            return pupil;
        }

        public void setPupil(Pupil pupil)
        {
            this.pupil = pupil;
        }

        public void fill()
        {
            Console.WriteLine("\nOlimpiad\nname(string):\ndate(DateTime:\nresult(int):\n");
            name = Console.ReadLine();
            if (!DateTime.TryParseExact(Console.ReadLine(), "dd.MM.yyyy", null, System.Globalization.DateTimeStyles.None, out date))
                date = DateTime.Now;
            while (true)
            {
                try
                {
                    result = int.Parse(Console.ReadLine());
                    break;
                }
                catch (Exception e)
                {
                    Console.WriteLine(e);
                }
            }
            teacher.fill();
            subject.fill();
            pupil.fill();
        }

        public void toString()
        {
            Console.Write("\nOlympiad:\n" +
                    "Name = " + name +
                    "\nDate = " + date.ToString("dd.MM.yyyy") +
                    "\nResult = " + result);
            teacher.toString();
            subject.toString();
            pupil.toString();
            Console.Write("\n");
        }
    }

}
