package LABS.L3.P2;
import java.util.Locale;

// colHours -> String rusName + method hasRusName
public enum Subject {
    MATHS(5, "МАТЕМАТИКА"),
    RUSSIAN(2, "РУССКИЙ"),
    BELARUSIAN(1, "БЕЛОРУССКИЙ"),
    PHYSICS(3, null);
    private int col_hours;
    private String rusName;

    Subject(int col_hours, String rusName){
        this.col_hours = col_hours;
        this.rusName = rusName;
    }
    public int getCol_hours() {
        return col_hours;
    }
    public int col_hoursFaculty(int faculty)
    {
        return col_hours + faculty;
    }
    public String getRusName() {
        return rusName;
    }

    public boolean hasRusName(){
        return rusName != null;
    }
}
