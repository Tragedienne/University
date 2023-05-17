package LABS.L6.P1;

import LABS.L3.P2.Timetable;

public class Collection {
    private Timetable[] timetables;


    public Collection(int n) {
        timetables = new Timetable[n];
    }

    public Timetable[] getTimetables() {
        return timetables;
    }

    public void setTimetables(Timetable[] timetables) {
        this.timetables = timetables;
    }
}