package LABS.L3.P1;
import java.util.Date;
import java.util.Scanner;
public class Olympiad {
    private String name;
    private Date date;
    private int result;
    private Teacher teacher;
    private Subject subject;
    private Pupil pupil;

    public Olympiad(String name, Date date, int result, Teacher teacher, Subject subject, Pupil pupil) {
        this.name = name;
        this.date = date;
        this.result= result;
        this.teacher=teacher;
        this.subject=subject;
        this.pupil=pupil;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Date getDate() {
        return date;
    }

    public void setDate(Date date ) {
        this.date = date;
    }

    public int getResult() {
        return result;
    }

    public void setNumber(int result) {
        this.result = result;
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

    public Pupil getPupil() {
        return pupil;
    }

    public void setPupil(Pupil pupil) {
        this.pupil = pupil;
    }

    public void fill(Scanner scanner) {
        name = scanner.nextLine();
        date = new Date(scanner.nextInt());
        result = scanner.nextInt();
        teacher.fill(scanner);
        subject.fill(scanner);
        pupil.fill(scanner);
    }

    @Override
    public String toString() {
        return "Olympiad:" +
                "Name=b" + name +
                ", Date= " + date +
                ", Result= " + result +
                ", Teacher= " + teacher +
                ", Subject= " + subject +
                ", Pupil= " + pupil;
    }
}
