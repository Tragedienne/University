package LABS.L3.P1;

import java.util.Date;
import java.util.Scanner;

public class Lesson {
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

    public void fill(Scanner scanner){
        lessonDate = new Date(scanner.nextInt());
        timetable.fill(scanner);
    }

    @Override
    public String toString() {
        return "Lesson:" +
                "Date= " + lessonDate +
                "Timetable= " + timetable;
    }
}

