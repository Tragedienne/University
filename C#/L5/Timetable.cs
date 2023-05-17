namespace L5
{
    public class Timetable : InOut
    {
        private int lessonNumber;
        private DateTime time;
        private Teacher teacher;
        private Subject subject;
        private Cabinet cabinet;
        private Class clas;

        public Timetable()
        {
            lessonNumber = 0;
            time = new DateTime(0);
            teacher = new Teacher();
            subject = new Subject();
            cabinet = new Cabinet();
            clas = new Class();
        }

        public Timetable(int lessonNumber, DateTime time, Teacher teacher, Subject subject, Cabinet cabinet, Class clas)
        {
            this.lessonNumber = lessonNumber;
            this.time = time;
            this.teacher = teacher;
            this.subject = subject;
            this.cabinet = cabinet;
            this.clas = clas;
        }

        public int getLessonNumber()
        {
            return lessonNumber;
        }
        public void setName(int lessonNumber)
        {
            this.lessonNumber = lessonNumber;
        }

        public DateTime getTime()
        {
            return time;
        }
        public void setTime(DateTime time)
        {
            this.time = time;
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

        public Cabinet getCabinet()
        {
            return cabinet;
        }
        public void setCabinet(Cabinet cabinet)
        {
            this.cabinet = cabinet;
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
            Console.WriteLine("\nTimetable\nlessonNumber(int):\ntime(DateTime)\n");
            while (true)
            {
                try
                {
                    lessonNumber = int.Parse(Console.ReadLine());
                    break;
                }
                catch (Exception e)
                {
                    Console.WriteLine(e);
                }
            }
            if (!DateTime.TryParseExact(Console.ReadLine(), "hh.mm.ss", null, System.Globalization.DateTimeStyles.None, out time))
                time = DateTime.Now;
            teacher.fill();
            subject.fill();
            cabinet.fill();
            clas.fill();
        }

        public void toString()
        {
            Console.Write("\nTimetable:\n" +
                    "lessonNumber = " + lessonNumber +
                    "\ntime = " + time.ToString("hh.mm.ss"));
            teacher.toString();
            subject.toString();
            cabinet.toString();
            clas.toString();
            Console.Write("\n");
        }
    }
}
