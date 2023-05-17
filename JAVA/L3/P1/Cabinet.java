package LABS.L3.P1;
import java.util.Scanner;

public class Cabinet {
    private int cabinetNumber;

    public Cabinet(int cabinetNumber) {
        this.cabinetNumber = cabinetNumber;
    }

    public int getCabinetNumberNumber() {
        return cabinetNumber;
    }

    public void setCabinetNumber(int classNumber) {
        this.cabinetNumber = classNumber;
    }

    public void fill(Scanner scanner){
        cabinetNumber = scanner.nextInt();
    }

    @Override
    public String toString() {
        return "Cabinet:" +
                "Name= " + cabinetNumber;
    }
}

