using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L5
{
    public class Pupil : InOut
    {
        private string FIO;
        private string sex;
        private DateTime birthday;
        private string address;
        private DateTime yearEnter;
        private DateTime yearIssue;
        private Class clas;

        public Pupil()
        {
            FIO = "Petrov Petr Petrovich";
            sex = "female";
            birthday = new DateTime(0);
            address = "Ogorenko 7-2-52";
            yearEnter = new DateTime(0);
            yearIssue = new DateTime(0);
            clas = new Class();
        }

        public Pupil(string FIO, string sex, DateTime birthday, string address, DateTime yearEnter, DateTime yearIssue, Class clas)
        {
            this.FIO = FIO;
            this.sex = sex;
            this.birthday = birthday;
            this.address = address;
            this.yearEnter = yearEnter;
            this.yearIssue = yearIssue;
            this.clas = clas;
        }

        public string getFIO()
        {
            return FIO;
        }

        public void setFIO(string FIO)
        {
            this.FIO = FIO;
        }

        public string getSex()
        {
            return sex;
        }

        public void setSex(string sex)
        {
            this.sex = sex;
        }

        public DateTime getBirthday()
        {
            return birthday;
        }

        public void setBirthday(DateTime birthday)
        {
            this.birthday = birthday;
        }

        public string getAddress()
        {
            return address;
        }

        public void setAddress(string address)
        {
            this.address = address;
        }

        public DateTime getYearEnter()
        {
            return yearEnter;
        }

        public void setYearEnter(DateTime yearEnter)
        {
            this.yearEnter = yearEnter;
        }

        public DateTime getYearIssue()
        {
            return yearIssue;
        }

        public void setYearIssue(DateTime yearIssue)
        {
            this.yearIssue = yearIssue;
        }

        public Class getClas()
        {
            return clas;
        }
        public void setClas(Class clas)
        {
            this.clas = clas;
        }

        public void fill()
        {
            Console.WriteLine("\nPupil\nFIO(string):\nsex(string):\nbirthday(DateTime):\nadress(string):\n" +
                "yearEnter(DateTime):\nyearIssue(DateTime):\n");
            FIO = Console.ReadLine();
            sex = Console.ReadLine();
            if (!DateTime.TryParseExact(Console.ReadLine(), "dd.MM.yyyy", null, System.Globalization.DateTimeStyles.None, out birthday))
                birthday = DateTime.Now;
            address = Console.ReadLine();
            if (!DateTime.TryParseExact(Console.ReadLine(), "yyyy", null, System.Globalization.DateTimeStyles.None, out yearEnter))
                yearEnter = DateTime.Now;
            if (!DateTime.TryParseExact(Console.ReadLine(), "yyyy", null, System.Globalization.DateTimeStyles.None, out yearIssue))
                yearIssue = DateTime.Now;
            clas.fill();
        }

        public void toString()
        {
            Console.Write("\nPupil:\n" +
                    "FIO = " + FIO + "\nSex = " + sex + ",\nBirthday = " + birthday.ToString("dd.MM.yyyy") +
                    "\nAddress = " + address +
                    "\nYear of admission = " + yearEnter.ToString("yyyy") + "\nYear of issue = " + yearIssue.ToString("yyyy"));
            clas.toString();
            Console.Write("\n");
        }
    }
}
