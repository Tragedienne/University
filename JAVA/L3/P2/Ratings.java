package LABS.L3.P2;

import java.util.Scanner;

import static java.lang.Integer.parseInt;

public class Ratings implements InOut{
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

    @Override
    public void fill(Scanner scanner){
        System.out.println("Mark: ");
        while (true) {
            try {
                mark = parseInt(scanner.nextLine());
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage() + ": try again");
            }
        }
        System.out.println("Pupil: ");
        pupil.fill(scanner);
        System.out.println("Lesson: ");
        lesson.fill(scanner);
    }

    @Override
    public void output() {
        System.out.println(this);
    }

    @Override
    public String toString() {
        return "Ratings:" +
                "Mark= " + mark +
                "Pupil= " + pupil +
                "Lesson= " + lesson + "}\n";
    }
}

