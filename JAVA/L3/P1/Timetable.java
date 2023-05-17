package LABS.L3.P1;
import java.util.Scanner;
import java.util.Date;

public class Timetable {
    private int lessonNumber;
    private Date time;
    private Teacher teacher;
    private Subject subject;
    private Cabinet cabinet;
    private Class clas;

    public Timetable(int lessonNumber, Date time, Teacher teacher, Subject subject, Cabinet cabinet, Class clas) {
        this.lessonNumber = lessonNumber;
        this.time = time;
        this.teacher=teacher;
        this.subject=subject;
        this.cabinet=cabinet;
        this.clas=clas;
    }

    public int getLessonNumber() {
        return lessonNumber;
    }
    public void setName(int lessonNumber) {
        this.lessonNumber = lessonNumber;
    }


    public Date getTime() {
        return time;
    }
    public void setTime(Date time) {
        this.time = time;
    }


    public Teacher getTeacher() {
        return teacher;
    }
    public void setTeacher(Teacher teacher) {
        this.teacher = teacher;
    }

    public Subject getSubject() {
        return subject;
    }
    public void setSubject(Subject subject) {
        this.subject = subject;
    }

    public Cabinet getCabinet() {
        return cabinet;
    }
    public void setCabinet(Cabinet cabinet) {
        this.cabinet = cabinet;
    }

    public Class getClas() {
        return clas;
    }
    public void setClas(Class clas) {
        this.clas = clas;
    }
    public void fill(Scanner scanner) {
        lessonNumber = scanner.nextInt();
        time = new Date(scanner.nextInt());
        teacher.fill(scanner);
        subject.fill(scanner);
        cabinet.fill(scanner);
        clas.fill(scanner);
    }

    @Override
    public String toString() {
        return "Timetable{" +
                "lessonNumber=" + lessonNumber +
                ", time=" + time +
                ", teacher=" + teacher +
                ", subject=" + subject +
                ", cabinet=" + cabinet +
                ", clas=" + clas +
                '}';
    }
}