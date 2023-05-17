package LABS.L6.P1;

import LABS.L3.P2.Timetable;
import java.util.Scanner;

public class Modification {
    private Collection collection;
    private Watch watch;


    public Modification(Collection collection, Watch watch) {
        this.collection = collection;
        this.watch = watch;
    }

    public void add(Timetable timetable) {
        Timetable [] timetables = collection.getTimetables();
        for (int i = 0; i < timetables.length; i++)
            if (timetables[i] == null) {
                timetable.fill(new Scanner(System.in));
                timetables[i] = timetable;
                return;
            }
        System.out.println("Collection is overflow!");
    }

    public void update(int j) {
        try {
            collection.getTimetables()[j].fill(new Scanner(System.in));
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Out of range collection!");
        }
        catch (NullPointerException e) {
            System.out.println("You can't change a non-existent element!");
        }
    }

    public void delete(int j) {
        try {
//            collection.getTimetables()[j] = null;
            Timetable [] temp = collection.getTimetables();
            int len = collection.getTimetables().length;
            for(int i = j; i < len - 1; i++)
                temp[i] = temp[i+1];
            temp[len - 1] = null;
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Out of range collection!");
        }

    }
    public void outCollection() {
        watch.OutCollection(collection.getTimetables());
    }
}