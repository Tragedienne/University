package LABS.L3.P2;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

import static java.lang.Integer.parseInt;

public class Pupil extends Man implements InOut{
    private String sex;
    private Date birthday;
    private Date yearEnter;
    private Date yearIssue;
    private Class clas;

    public Pupil() {
        this("", new Date(), new Date(), new Date(), Class.MATH, "","");
    }
    public Pupil(String sex, Date birthday, Date yearEnter, Date yearIssue, Class clas, String FIO, String address) {
        super(FIO,address);
        this.sex=sex;
        this.birthday=birthday;
        this.yearEnter=yearEnter;
        this.yearIssue=yearIssue;
        this.clas=clas;
    }

    public void Pupil1(String FIO, String address, String sex, Date birthday, Date yearEnter, Date yearIssue) {
        this.sex = sex;
        this.birthday = birthday;
        this.yearEnter = yearEnter;
        this.yearIssue = yearIssue;
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

    @Override
    public void fill(Scanner scanner) {
        System.out.println("Man: ");
        super.fill(scanner);
        System.out.println("Sex: ");
        sex = scanner.nextLine();
        System.out.println("Birthday: ");
        SimpleDateFormat format = new SimpleDateFormat("dd MM yyyy");
        while (true) {
            try {
                birthday = format.parse(scanner.nextLine());
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage() + ": try again");
            }
        }
        System.out.println("Year enter: ");
        while (true) {
            try {
                yearEnter = format.parse(scanner.nextLine());
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage() + ": try again");
            }
        }
        System.out.println("Year issue: ");
        while (true) {
            try {
                yearIssue = format.parse(scanner.nextLine());
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage() + ": try again");
            }
        }
        Class[] valuesC = clas.values();
        System.out.println("Enter Class from list:");
        for (Class c:valuesC)
            System.out.print(" " + c.ordinal() + ":" + c.name() + " ");
        System.out.print(":\n");
        while (true) {
            String cl = scanner.nextLine();
            try {
                clas = valuesC[parseInt(cl)];
                break;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e.getMessage());
            } catch (IllegalArgumentException e) {
                try {
                    clas = Class.valueOf(cl);
                    break;
                } catch (IllegalArgumentException ee) {
                    System.out.println(e.getMessage());
                }
            }
        }
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
    public void output(){
        System.out.println(this);
    }

    @Override
    public String toString() {
        return  super.toString() + "sex = " + sex +
                ", birthday = " + new SimpleDateFormat("dd.MM.yyyy").format(birthday) +
                ", yearEnter = " + new SimpleDateFormat("dd.MM.yyyy").format(yearEnter) +
                ", yearIssue = " + new SimpleDateFormat("dd.MM.yyyy").format(yearIssue) + "\n" +
                ", clas = " + clas + "\n";
    }
}
