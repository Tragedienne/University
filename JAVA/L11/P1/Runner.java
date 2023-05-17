package LABS.L11.P1;


import LABS.L11.*;

import java.io.FileReader;
import java.io.FileWriter;
import java.lang.Class;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.lang.reflect.*;

public class Runner {
    public static void main(String[] args) throws Exception{
        Scanner scan = new Scanner(System.in);
        Object obj = new Timetable();
        System.out.println("-------------------");
        //public Pupil(String FIO, String address, String sex, Date birthday, Date yearEnter, Date yearIssue)
        //Пользователь вводит имя класса и получает его объекты.
        /*
        List<Object> objectList = new ArrayList<>();
        while (scanner.hasNextLine()){
            try {
                objectList.add(Class.forName(scanner.nextLine()).newInstance());
            }
            catch (Exception e){
                e.printStackTrace();
            }
        }
         */
        System.out.println("-------------------");

        /*String str = "";
        Method[] methods = str.getClass().getMethods();
        for(Method method : methods){
            System.out.println(method);
        }

        Field[] fields = str.getClass().getFields();
        for(Field field : fields){
            System.out.println(field);
        }*/

        //Pupil, String, Teacher;

        /*ArrayList<String> list = new ArrayList<String>();
        for(int i=0; i<3; i++){
            list.add(String.valueOf(scan.nextLine()));
        }
        Object[] mas = new Object[3];
        for(int i=0; i<3; i++){
            mas[i] = Class.forName(list.get(i)).newInstance();
        }*/
        Object[] mas = new Object[3];
        for(int i=0; i<3; i++) {
            mas[i] = Class.forName(scan.nextLine()).newInstance();
            System.out.println(mas[i]);
        }

        /*List<Object> objectList1 = new ArrayList<>();
        while (scan.hasNextLine()){
            try {
                objectList1.add(Class.forName(scan.nextLine()).newInstance());
            }
            catch (Exception e){
                e.printStackTrace();
            }
        }*/























        System.out.println("All fields:");
        var fields = obj.getClass().getDeclaredFields();
        for (var f : fields) {
            System.out.println(" " + f.getName());
        }

        System.out.println("All methods:");
        var methods = obj.getClass().getDeclaredMethods();
        for (var m : methods){
            System.out.println(" " + m.getName());
        }

        System.out.println("Available fields:");
        var availableM = obj.getClass().getFields();
        for (var am : availableM){
            System.out.println(" " + am.getName());
        }

        System.out.println("Available methods:");
        var availableF = obj.getClass().getMethods();
        for (var af : availableF){
            System.out.println(" " + af.getName());
        }

        FileWriter fileWriter = new FileWriter("D:\\УНИВЕР\\3К1С\\РПС и СПП\\LAB3\\src\\LABS\\L11\\P1/1.txt");
        Object[] objects = new Object[]{
                new Timetable(),
                new Pupil(),
                new Teacher()
        };
        for (Object ob : objects){
            try{
                fileWriter.write(ob.getClass().getName() + "\n");
            }
            catch (Exception e){
                System.out.println(e.getMessage());
            }
        }
        fileWriter.close();

        FileReader fileReader = new FileReader("D:\\УНИВЕР\\3К1С\\РПС и СПП\\LAB3\\src\\LABS\\L11\\P1/1.txt");
        Scanner scanner = new Scanner(fileReader);

        List<Object> objectList = new ArrayList<>();
        while (scanner.hasNextLine()){
            try {
                objectList.add(Class.forName(scanner.nextLine()).newInstance());
            }
            catch (Exception e){
                e.printStackTrace();
            }
        }
        fileReader.close();
        System.out.println("\nClasses from file: ");
        for (Object o : objectList) {
            System.out.println(o.getClass().getName());
        }
    }
}
