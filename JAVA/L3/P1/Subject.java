package LABS.L3.P1;
import java.util.Scanner;

public class Subject {
    private String discipline;

    public Subject(String discipline) {
        this.discipline = discipline;
    }

    public String getDiscipline() {
        return discipline;
    }

    public void setDiscipline(String discipline) {
        this.discipline = discipline;
    }

    public void fill(Scanner scanner){
        discipline = scanner.nextLine();
    }

    @Override
    public String toString() {
        return "Title:" +
                "Name: " + discipline;
    }
}
