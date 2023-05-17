package LABS.L3.P1;
import java.util.Scanner;

public class Ratings {
    private int mark;
    private Pupil pupil;
    private Lesson lesson;

    public Ratings(int mark, Pupil pupil, Lesson lesson) {
        this.mark = mark;
        this.pupil=pupil;
        this.lesson=lesson;
    }

    public int getMark() {
        return mark;
    }

    public void setMark(int mark) {
        this.mark = mark;
    }


    public Pupil getPupil() {
        return pupil;
    }

    public void setPupil(Pupil pupil) {
        this.pupil = pupil;
    }

    public Lesson getLesson() {
        return lesson;
    }

    public void setLesson(Lesson lesson) {
        this.lesson = lesson;
    }

    public void fill(Scanner scanner){
        mark = scanner.nextInt();
        pupil.fill(scanner);
        lesson.fill(scanner);
    }

    @Override
    public String toString() {
        return "Ratings:" +
                "Mark= " + mark +
                "Pupil= " + pupil +
                "Lesson= " + lesson ;
    }
}

