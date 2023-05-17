package LABS.L3.P2;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

import static java.lang.Integer.parseInt;

public class Olympiad implements InOut {
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

    @Override
    public void fill(Scanner scanner) {
        System.out.println("Name: ");
        name = scanner.nextLine();
        System.out.println("Date in format dd MM yyyy: ");
        SimpleDateFormat format = new SimpleDateFormat("dd MM yyyy");
        while (true) {
            try {
                date = format.parse(scanner.nextLine());
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage() + ": try again");
            }
        }
        System.out.println("Result: ");
        while (true) {
            try {
                result = parseInt(scanner.nextLine());
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage() + ": try again");
            }
        }
        System.out.println("Teacher: ");
        teacher.fill(scanner);
        Subject[] valuesS = subject.values();
        System.out.println("Enter Subject from list:");
        for (Subject s:valuesS)
            System.out.print(" " + s.ordinal() + ":" + s.name() + " ");
        System.out.print(":\n");
        while (true) {
            String sub = scanner.nextLine();
            try {
                subject = valuesS[parseInt(sub)];
                break;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e.getMessage() + ": try again");
            } catch (IllegalArgumentException e) {
                try {
                    subject = Subject.valueOf(sub);
                    break;
                } catch (IllegalArgumentException ee) {
                    System.out.println(e.getMessage() + ": try again");
                }
            }
        }
        System.out.println("Pupil: ");
        pupil.fill(scanner);
    }

    @Override
    public void output() {
        System.out.println(this);
    }

    @Override
    public String toString() {
        return "Olympiad:" +
                "Name=b" + name +
                ", Date= " + new SimpleDateFormat("dd.MM.yyyy").format(date) +
                ", Result= " + result +
                ", Teacher= " + teacher +
                ", Subject= " + subject +
                ", Pupil= " + pupil + "\n";
    }
}
