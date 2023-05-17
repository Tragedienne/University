package LABS.L6.P1;

import LABS.L3.P2.Timetable;

public class Watch {
    public void OutCollection(Timetable[] timetables) {
        System.out.println("Collection:");
        for (int i = 0; i < timetables.length; i++)
            if(timetables[i] != null) {
                System.out.println(i + " element");
                timetables[i].output();
            }
    }
}