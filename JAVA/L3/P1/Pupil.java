package LABS.L3.P1;
import java.util.Scanner;
import java.util.Date;

public class Pupil {
    private String FIO;
    private String sex;
    private Date birthday;
    private String address;
    private Date yearEnter;
    private Date yearIssue;
    private Class clas;


    public Pupil(String FIO, String sex, Date birthday, String address, Date yearEnter, Date yearIssue, Class clas) {
        this.FIO = FIO;
        this.sex=sex;
        this.birthday=birthday;
        this.address = address;
        this.yearEnter=yearEnter;
        this.yearIssue=yearIssue;
        this.clas=clas;
    }

    public String getFIO() {
        return FIO;
    }

    public void setFIO(String FIO) {
        this.FIO = FIO;
    }

    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public Date getBirthday() {
        return birthday;
    }

    public void setBirthday(Date birthday) {
        this.birthday = birthday;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public Date getYearEnter() {
        return yearEnter;
    }

    public void setYearEnter(Date yearEnter) {
        this.yearEnter = yearEnter;
    }

    public Date getYearIssue() {
        return yearIssue;
    }

    public void setYearIssue(Date yearIssue) {
        this.yearIssue = yearIssue;
    }

    public Class getClas() {
        return clas;
    }
    public void setClas(Class clas) {
        this.clas = clas;
    }

    public void fill(Scanner scanner) {
        FIO = scanner.nextLine();
        sex = scanner.nextLine();
        birthday = new Date(scanner.nextInt());
        address = scanner.nextLine();
        yearEnter = new Date(scanner.nextInt());
        yearIssue = new Date(scanner.nextInt());
        clas.fill(scanner);
    }

    @Override
    public String toString() {
        return "Pupil:" +
                "FIO= " + FIO + ", Sex= " + sex + ", Birthday= " + birthday +
                ", Address= " + address +
                ", Year of admission= " + yearEnter + ", Year of issue= " + yearIssue +
                ", Class= " + clas ;
    }
}
