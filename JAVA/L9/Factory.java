package LABS.L9;

import LABS.L3.P2.Man;
import LABS.L3.P2.Pupil;
import LABS.L3.P2.Teacher;

public class Factory {
    public static Object [] createArr(int len){
        Object [] objects = new Man[len];
        return objects;
    }

    public static Object createObject(){
        return new Teacher();
    }
}
