package LABS.L11.P1;

import LABS.L11.Pupil;
import LABS.L11.Teacher;
import LABS.L11.Timetable;


import java.io.FileReader;
import java.io.FileWriter;
import java.lang.reflect.*;
import java.util.ArrayList;
import java.util.Scanner;

public class Run {
    public static void main(String[] args) throws Exception{

        Method[] methods1 = Math.class.getMethods();
        for(Method method : methods1){
            System.out.println(method);
        }


















        Timetable timetable = new Timetable();

        System.out.println("All methods:");
        Method[] methods = timetable.getClass().getMethods();
        for(Method method: methods){
            System.out.println(method);
        }

        System.out.println("All fields:");
        Field[] fields = timetable.getClass().getFields();
        for(Field field : fields){
            System.out.println(field);
        }

        System.out.println("Declared methods:");
        Method[] declMethods = timetable.getClass().getDeclaredMethods();
        for (Method method : declMethods){
            System.out.println(method);
        }

        System.out.println("Declared fields:");
        Field[] declFields = timetable.getClass().getDeclaredFields();
        for (Field field : declFields){
            System.out.println(field);
        }

        Object[] objects = new Object[3];
        objects[0] = new Timetable();
        objects[1] = new Pupil();
        objects[2] = new Teacher();

        FileWriter fileWriter = new FileWriter("file.txt");
        for (Object obj : objects){
            fileWriter.write(obj.getClass().getName());
            fileWriter.write("\n");
        }
        fileWriter.close();

        System.out.println("Class Data Instances:");
        ArrayList<String> list = new ArrayList<>();
        FileReader read = new FileReader("file.txt");
        Scanner fileReader = new Scanner(read);
        while (fileReader.hasNextLine()){
            list.add(fileReader.nextLine());
        }
        fileReader.close();

        Object[] mas = new Object[list.size()];
        for(int i=0; i< list.size(); i++){
            mas[i] = Class.forName(String.valueOf(list.get(i))).newInstance();
            System.out.println(mas[i]);
        }
    }
}
