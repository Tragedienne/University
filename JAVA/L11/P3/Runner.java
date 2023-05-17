//package LABS.L11.P3;
//
//import LABS.L11.Pupil;
//
//import java.lang.reflect.Field;
//import java.lang.reflect.Method;
//import java.lang.reflect.Modifier;
//
//public class Runner {
//    public static void main(String[] args){
//        System.out.println(classToString(Pupil.class));
//    }
//
//    public static String classToString(Class class1){
//        StringBuilder classSkeletString = new StringBuilder();
//
//        var fields = class1.getDeclaredFields();
//        for(Field f : fields){
//            classSkeletString.append(Modifier.toString(f.getModifiers()))
//                    .append(" ")
//                    .append(f.getType().getName())
//                    .append(" ")
//                    .append(f.getName())
//                    .append("\n");
//        }
//        classSkeletString.append('\n');
//
//        var methods = class1.getMethods();
//        for (Method m : methods){
//            var args = m.getParameters();
//
//            StringBuilder argsStr = new StringBuilder();
//            for(int i = 0; i < argsStr.length(); i++){
//                argsStr.append(args[i].getType().getName())
//                        .append(" ")
//                        .append(args[i].getName());
//                if(i != args.length-1){
//                    argsStr.append(", ");
//                }
//            }
//
//            classSkeletString.append(Modifier.toString(m.getModifiers()))
//                    .append(" ")
//                    .append(m.getReturnType().getName())
//                    .append(" ")
//                    .append(m.getName())
//                    .append("(")
//                    .append("){\n")
//                    .append(
//                            switch (m.getReturnType().getName()){
//                                case "void" -> "";
//                                case "int", "double", "float", "long", "short", "byte", "char" -> "\treturn 0;\n";
//                                case "boolean" -> "\treturn null;\n";
//                            }
//                    )
//                    .append("};\n\n");
//        }
//        return classSkeletString.toString();
//    }
//}
