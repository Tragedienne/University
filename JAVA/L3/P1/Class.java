package LABS.L3.P1;
import java.util.Scanner;

public class Class {
    private int classNumber;

    public Class(int classNumber) {
        this.classNumber = classNumber;
    }

    public int getClassNumber() {
        return classNumber;
    }

    public void setClassNumber(int classNumber) {
        this.classNumber = classNumber;
    }

    public void fill(Scanner scanner){
        classNumber = scanner.nextInt();
    }

    @Override
    public String toString() {
        return "Class:" +
                "Name= " + classNumber;
    }
}

