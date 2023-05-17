namespace L5
{
    public class Lesson : InOut
    {
        private DateTime lessonDate;
        private Timetable timetable;

        public Lesson()
        {
            lessonDate = new DateTime(0);
            timetable = new Timetable();
        }

        public Lesson(DateTime lessonDate, Timetable timetable)
        {
            this.lessonDate = lessonDate;
            this.timetable = timetable;
        }

        public DateTime getLessonDateDate()
        {
            return lessonDate;
        }

        public void setLessonDate(DateTime lessonDate)
        {
            this.lessonDate = lessonDate;
        }

        public Timetable getTimetable()
        {
            return timetable;
        }

        public void setTimetable(Timetable timetable)
        {
            this.timetable = timetable;
        }

        public void fill()
        {
            Console.WriteLine("\nLesson\nlessonDate(DateTime):\n");
            if (!DateTime.TryParseExact(Console.ReadLine(), "dd.MM.yyyy", null, System.Globalization.DateTimeStyles.None, out lessonDate))
                lessonDate = DateTime.Now;
            timetable.fill();
        }

        public void toString()
        {
            Console.Write("\nLesson:\n" +
                    "Date = " + lessonDate.ToString("dd.MM.yyyy") + "\n");
                
            timetable.toString();
        }
    }
}
