package LABS.L3.P2;
import java.util.Locale;
import java.util.NoSuchElementException;

public enum Cabinet {
    CAB_1(1),
    CAB_2(2),
    CAB_3(2),
    CAB_4(3);

    private int floor;
    Cabinet(int floor){
        this.floor = floor;
    }
    public int getFloor() {
        return floor;
    }
    // Метод для поиска кабинета по этажу
    public static Cabinet mainFloor(int floor) {
        for (Cabinet cabfloor : values()) {
            if (cabfloor.floor == floor) {
                return cabfloor;
            }
        }
        throw new NoSuchElementException(
                "There's no Cabinets with floor " + floor);
    }
}

