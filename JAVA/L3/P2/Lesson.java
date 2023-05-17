package LABS.L3.P2;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class Lesson implements InOut{
    private Date lessonDate;
    private Timetable timetable;

    public Lesson(Date lessonDate, Timetable timetable) {
        this.lessonDate = lessonDate;
        this.timetable=timetable;
    }

    public Date getLessonDateDate() {
        return lessonDate;
    }

    public void setLessonDate(Date lessonDate) {
        this.lessonDate = lessonDate;
    }

    public Timetable getTimetable() {
        return timetable;
    }

    public void setTimetable(Timetable timetable) {
        this.timetable = timetable;
    }

    @Override
    public void fill(Scanner scanner){
        System.out.println("LessonDate in format dd MM yyyy: ");
        SimpleDateFormat format = new SimpleDateFormat("dd MM yyyy");
        while (true) {
            try {
                lessonDate = format.parse(scanner.nextLine());
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage() + ": try again");
            }
        }
        System.out.println("Timetable: ");
        timetable.fill(scanner);
    }

    @Override
    public void output() {
        System.out.println(this);
    }

    @Override
    public String toString() {
        return "Lesson:" +
                "Date= " + new SimpleDateFormat("dd.MM.yyyy").format(lessonDate) +
                "Timetable= " + timetable + "\n";
    }
}

