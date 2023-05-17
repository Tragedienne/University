package LABS.L3.P1;

import java.util.Scanner;

public class Teacher {
    private String FIO;
    private String address;
    private String phoneNumber;
    private Title title;
    private Subject subject;

    public Teacher(String FIO, String address, String phoneNumber, Title title, Subject subject) {
        this.FIO = FIO;
        this.address = address;
        this.phoneNumber = phoneNumber;
        this.title=title;
        this.subject=subject;
    }

    public String getFIO() {
        return FIO;
    }

    public void setFIO(String FIO) {
        this.FIO = FIO;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getPhoneNumberNumber() {
        return phoneNumber;
    }

    public void setPhoneNumberNumber(String phoneNumber) {
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

    public void fill(Scanner scanner) {
        FIO = scanner.nextLine();
        address = scanner.nextLine();
        phoneNumber = scanner.nextLine();
        title.fill(scanner);
        subject.fill(scanner);
    }

    @Override
    public String toString() {
        return "Teacher:" +
                "FIO= " + FIO +
                ", Address= " + address +
                ", Number= " + phoneNumber + ", Title= " + title + ", Subject= " + subject ;
    }
}
