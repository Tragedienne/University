namespace L5
{
    public class Teacher : InOut
    {
        private string FIO;
        private string address;
        private string phoneNumber;
        private Title title;
        private Subject subject;

        public Teacher()
        {
            FIO = "Sidorov Sidr Sidorovich";
            address = "Olimpiyaskaya 69-59";
            phoneNumber = "+375259422541";
            title = new Title();
            subject = new Subject();
        }

        public Teacher(string FIO, string address, string phoneNumber, Title title, Subject subject)
        {
            this.FIO = FIO;
            this.address = address;
            this.phoneNumber = phoneNumber;
            this.title = title;
            this.subject = subject;
        }

        public string getFIO()
        {
            return FIO;
        }

        public void setFIO(string FIO)
        {
            this.FIO = FIO;
        }

        public string getAddress()
        {
            return address;
        }

        public void setAddress(string address)
        {
            this.address = address;
        }

        public string getPhoneNumberNumber()
        {
            return phoneNumber;
        }

        public void setPhoneNumberNumber(string phoneNumber)
        {
            this.phoneNumber = phoneNumber;
        }

        public Title getTitle()
        {
            return title;
        }

        public void setTitle(Title title)
        {
            this.title = title;
        }

        public Subject getSubject()
        {
            return subject;
        }

        public void setSubject(Subject subject)
        {
            this.subject = subject;
        }

        public void fill()
        {
            Console.WriteLine("\nTeacher\nFIO(string):\naddres(string)\nphoneNumder(string)\n");
            FIO = Console.ReadLine();
            address = Console.ReadLine();
            phoneNumber = Console.ReadLine();
            title.fill();
            subject.fill();
        }

        public void toString()
        {
            Console.Write("\nTeacher:\n" +
                    "FIO = " + FIO +
                    "\nAddress = " + address +
                    "\nNumber = " + phoneNumber);
            title.toString();
            subject.toString();
            Console.Write("\n");
        }
    }
}
