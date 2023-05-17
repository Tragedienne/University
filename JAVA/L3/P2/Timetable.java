package LABS.L3.P2;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;
import static java.lang.Integer.parseInt;


public class Timetable implements InOut {
    private int lessonNumber;
    private Date time;
    private Teacher teacher;
    private Cabinet cabinet;
    private Class clas;

    public Timetable(){
        this(1,new Date(), new Teacher(), Subject.MATHS, Cabinet.CAB_2, Class.MATH);
    }
    public Timetable(int lessonNumber, Date time, Teacher teacher, Subject subject, Cabinet cabinet, Class clas) {
        this.lessonNumber = lessonNumber;
        this.time = time;
        this.teacher=teacher;
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

    @Override
    public void fill(Scanner scanner) {
        System.out.println("LessonNumber: ");
        while (true) {
            try {
                lessonNumber = parseInt(scanner.nextLine());
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage() + ": try again");
            }
        }
        System.out.println("Time in format HH mm ss: ");
        SimpleDateFormat format = new SimpleDateFormat("HH mm ss");
        while (true) {
            try {
                Date t = format.parse(scanner.nextLine());
                if (t.after(format.parse("23 59 59")))
                    throw new Exception("Time is not correct!");
                time = t;
                break;
            } catch (Exception e) {
                System.out.println("Time is not correct!: try again");
            }
        }
        System.out.println("Teacher: ");
        teacher.fill(scanner);
        Cabinet[] valuesC = cabinet.values();
        System.out.println("Enter Cabinet from list:");
        for (Cabinet c:valuesC)
            System.out.print(" " + c.ordinal() + ":" + c.name() + " ");
        System.out.print(":\n");
        while (true) {
            String cab = scanner.nextLine();
            try {
                cabinet = valuesC[parseInt(cab)];
                break;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e.getMessage() + ": try again");
            } catch (IllegalArgumentException e) {
                try {
                    cabinet= Cabinet.valueOf(cab);
                    break;
                } catch (IllegalArgumentException ee) {
                    System.out.println(e.getMessage() + ": try again");
                }
            }
        }
        Class[] valuesR = clas.values();
        System.out.println("Enter Class from list:");
        for (Class r:valuesR)
            System.out.print(" " + r.ordinal() + ":" + r.name() + " ");
        System.out.print(":\n");
        while (true) {
            String cl = scanner.nextLine();
            try {
                clas = valuesR[parseInt(cl)];
                break;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e.getMessage() + ": try again");
            } catch (IllegalArgumentException e) {
                try {
                    clas = Class.valueOf(cl);
                    break;
                } catch (IllegalArgumentException ee) {
                    System.out.println(e.getMessage() + ": try again");
                }
            }
        }
    }

    @Override
    public void output() {
        System.out.println(this);
    }

    @Override
    public String toString() {
        return "Timetable{" +
                "lessonNumber=" + lessonNumber +
                ", time=" + new SimpleDateFormat("HH:mm:ss").format(time) + "\n" +
                ", teacher=" + teacher +
                ", cabinet=" + cabinet +
                ", clas=" + clas +
                "}\n";
    }
}