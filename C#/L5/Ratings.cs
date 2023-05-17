using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L5
{
    public class Ratings : InOut
    {
        private int mark;
        private Pupil pupil;
        private Lesson lesson;

        public Ratings()
        {
            mark = 0;
            pupil = new Pupil();
            lesson = new Lesson();
        }

        public Ratings(int mark, Pupil pupil, Lesson lesson)
        {
            this.mark = mark;
            this.pupil = pupil;
            this.lesson = lesson;
        }

        public int getMark()
        {
            return mark;
        }

        public void setMark(int mark)
        {
            this.mark = mark;
        }


        public Pupil getPupil()
        {
            return pupil;
        }

        public void setPupil(Pupil pupil)
        {
            this.pupil = pupil;
        }

        public Lesson getLesson()
        {
            return lesson;
        }

        public void setLesson(Lesson lesson)
        {
            this.lesson = lesson;
        }

        public void fill()
        {
            Console.WriteLine("\nRatings\nmark(int):\n");
            while (true)
            {
                try
                {
                    mark = int.Parse(Console.ReadLine());
                    break;
                }
                catch (Exception e)
                {
                    Console.WriteLine(e);
                }
            }
            pupil.fill();
            lesson.fill();
        }

        public void toString()
        {
            Console.Write("\nRatings:\n" +
                    "Mark = " + mark);
            pupil.toString();
            lesson.toString();
            Console.Write("\n");
        }
    }

}
