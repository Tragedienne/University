package LABS.L3.P2;
//Должность
import java.util.Locale;

public enum Title {
    MATH_TEACHER(100),
    RUS_TEACHER(200),
    BEL_TEACHER(300),
    PHYS_TEACHER(400);
    private int salary;

    Title(int salary) {
        this.salary = salary;
    }
    public int getSalary() {
        return salary;
    }
    public int salaryPremium(int premium)
    {
        return salary + premium;
    }
}
