package LABS.L3.P1;
//Должность
import java.util.Scanner;

public class Title {
    private String name;

    public Title(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void fill(Scanner scanner){
        name = scanner.nextLine();
    }

    @Override
    public String toString() {
        return "Title:" +
                "Name= " + name;
    }
}
