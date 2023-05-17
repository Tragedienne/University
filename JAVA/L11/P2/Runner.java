package LABS.L11.P2;

import LABS.L11.Pupil;
import LABS.L11.Teacher;
import LABS.L11.Timetable;


import java.lang.reflect.Method;
import java.util.stream.Stream;

public class Runner {
    public static void main(String[] args) throws Exception{
        Object[] objects = new Object[]{
                new Timetable(),
                new Pupil(),
                new Teacher()
        };
        System.out.println("Objects to string: ");
        for(Object ob : objects){
            System.out.println(" " + toString(Object.class.getMethod("toString"), ob, null));
        }

        String methodVoid = "void";
        System.out.println("\n Timetables methods " + methodVoid);
        var methods = getMethods(Timetable.class, methodVoid);
        for (Method m : methods) {
            System.out.println(" " + m);
        }
    }

    public static Object toString(Method method, Object obj, Object[] parametres){
        try {
            return method.invoke(obj, parametres);
        }
        catch (Exception e){
            System.out.println(e.getMessage());
        }
        return null;
    }

    public static Method[] getMethods(Class class1, String methodVoid){
        return Stream.of(class1.getDeclaredMethods()).filter(x->x.getReturnType().getName().equals(methodVoid)).toArray(Method[]::new);
    }
}
