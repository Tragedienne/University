package LABS.L6.P2;

import LABS.L3.P2.Timetable;

public class Factory {
    public static Object [] createType(Types type, int len){
        Object [] create = null;
        switch (type){
            case TIMETABLE -> create = new Timetable[len];
        }
        return create;
    }

    public static Object createTypeElement(Types type){
        Object create = null;
        switch (type){
            case TIMETABLE -> create = new Timetable();
        }
        return create;
    }
}
