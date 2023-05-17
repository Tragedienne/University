package LABS.L6.P3;

import LABS.L3.P2.Man;
import LABS.L3.P2.Pupil;
import LABS.L3.P2.Teacher;

public class Factory {
    public static Object [] createArr(int len){
        Object [] objects = new Man[len];
        return objects;
    }

    public static void printType(){
        System.out.println("Pupil\nTeacher");
    }

    public static Object createObject(String type){
        switch (type){
            case "Pupil":
                return new Pupil();
            case "Teacher":
                return new Teacher();
            default:
                return new Object();
        }
    }
}
