package LABS.L11;

import LABS.L3.P2.InOut;
import LABS.L3.P2.Man;
import LABS.L3.P2.Subject;
import LABS.L3.P2.Title;

import java.util.Scanner;

import static java.lang.Integer.parseInt;

public class Teacher extends Man implements InOut {
    private String phoneNumber;
    private Title title;
    private Subject subject;

    public Teacher(){
        this("", Title.MATH_TEACHER, Subject.MATHS, "", "");
    }

    public Teacher(String phoneNumber, Title title, Subject subject, String FIO, String address) {
        super(FIO, address);
        this.phoneNumber = phoneNumber;
        this.title=title;
        this.subject=subject;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }

    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    public Title getTitle() {
        return title;
    }

    public void setTitle(Title title) {
        this.title = title;
    }

    public Subject getSubject() {
        return subject;
    }

    public void setSubject(Subject subject) {
        this.subject = subject;
    }

    @Override
    public void fill(Scanner scanner) {
        System.out.println("Man: ");
        super.fill(scanner);
        System.out.println("Phone number: ");
        phoneNumber = scanner.nextLine();
        Title[] valuesT = title.values();
        System.out.println("Enter Title from list:");
        for (Title t:valuesT)
            System.out.print(" " + t.ordinal() + ":" + t.name() + " ");
        System.out.print(":\n");
        while (true) {
            String tit = scanner.nextLine();
            try {
                title = valuesT[parseInt(tit)];
                break;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e.getMessage() + ": try again");
            } catch (IllegalArgumentException e) {
                try {
                    title = Title.valueOf(tit);
                    break;
                } catch (IllegalArgumentException ee) {
                    System.out.println(e.getMessage() + ": try again");
                }
            }
        }
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
    }

    @Override
    public void output() {
    }

    @Override
    public boolean home(String s) {
        if(!getAddress().contains(s)){
            System.out.println("He is not from " + s);
            return false;
        }else{
            System.out.println("He is from " + s);
            return true;
        }
    }

    @Override
    public String toString() {
        return super.toString() +
                "phoneNumber = " + phoneNumber + "\n" +
                ", title = " + title + "\n" +
                ", subject = " + subject +
                "\n";
    }
}
