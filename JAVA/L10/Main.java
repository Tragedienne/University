package LABS.L10;

public class Main {
//7.Составить регулярное выражение, является ли заданная строчка IP адресом, записанным в десятичном виде.
    public static boolean seven(String str){
        return str.matches("((0|1\\d{0,2}|2([0-4][0-9]|5[0-5]))\\.){3}(0|1\\d{0,2}|2([0-4][0-9]|5[0-5]))");
    }
//6.Написать регулярное выражение определяющее является ли данная строчка валидным E-mail.
    public static boolean six(String str){
        return str.matches("^[a-zA-Z0-9]+@[a-zA-Z0-9]+\\.[a-zA-Z0-9]+$");
    }
//1.Написать регулярное выражение определяющее является ли данная строчка строкой "abcdefghijklmnopqrstuv18340" или нет.
    public static boolean one(String str){
        return str.matches("abcdefghijklmnopqrstuv18340");
    }
//2.Написать регулярное выражение определяющее является ли данная строчка GUID с или без скобок. Где GUID это строчка, состоящая из 8, 4, 4, 4, 12 шестнадцатеричных цифр разделенных тире.
    public static boolean two(String str){
        return str.matches("^\\{([0-9a-fA-F]){8}-(([0-9a-fA-F]){4}-){3}([0-9a-fA-F]){12}}$|" +
                "^([0-9a-fA-F]){8}-(([0-9a-fA-F]){4}-){3}([0-9a-fA-F]){12}$");
    }
//9.Проверить, является ли заданная строка телефонным номером.
    public static boolean nine(String str){
//        return str.matches("^\\+((\\d{3}-\\d{2}-\\d{3}-\\d{2}-\\d{2})|(\\d-\\d{3}-\\d{3}-\\d{2}-\\d{2}))$");
        return str.matches("^\\+((\\d{3}-\\d{2}-\\d{3}(-\\d{2}){2})|(\\d(-\\d{3}){2}(-\\d{2}){2}))");
    }
    public static void check7(){
//        String str1 = "127.0.0.1";
//        System.out.println(str1 + " -  " + seven(str1));
        if(!seven("127.0.0.1")){
            System.out.println("Error №1 in seven.");
        }
        if(!seven("255.255.1.255")){
            System.out.println("Error №2 in seven.");
        }
        if(!seven("192.168.0.1")){
            System.out.println("Error №3 in seven.");
        }
        if(!seven("255.168.0.0")){
            System.out.println("Error №4 in seven.");
        }
        if(seven("1300.6.7.8")){
            System.out.println("Error №5 in seven.");
        }
        if(seven("abc.def.gha.bcd")){
            System.out.println("Error №6 in seven.");
        }
        if(seven("254.hzf.bar.10")){
            System.out.println("Error №7 in seven.");
        }
        if(seven("255.255.255.f")){
            System.out.println("Error №8 in seven.");
        }
    }

    public static void ckeck6(){
        if(!six("mail@mail.ru")){
            System.out.println("Error №1 in six.");
        }
        if(!six("valid@megapochta.com")){
            System.out.println("Error №2 in six.");
        }
        if(!six("aa@aa.info")){
            System.out.println("Error №3 in six.");
        }
        if(six("bug@@@com.ru")){
            System.out.println("Error №4 in six.");
        }
        if(six("@val.ru")){
            System.out.println("Error №5 in six.");
        }
        if(six("Just Text2")){
            System.out.println("Error №6 in six.");
        }
        if(six("val@val")){
            System.out.println("Error №7 in six.");
        }
        if(six("val@val.a.a.a.a")){
            System.out.println("Error №8 in seven.");
        }
        if(six("12323123@111[]][]")){
            System.out.println("Error №9 in six.");
        }
    }

    public static void check1(){
        if(!one("abcdefghijklmnopqrstuv18340")){
            System.out.println("Error №1 in one.");
        }
        if(one("abcdefghijklmnoasdfasdpqrstuv18340")){
            System.out.println("Error №2 in one.");
        }
        if(one("abcdefghijklmnoasdfasdpqrstuv18340d")){
            System.out.println("Error №3 in one.");
        }
        if(one("abcdefghijklmnoasdfasdpqrstuv18341")){
            System.out.println("Error №4 in one.");
        }
        if(one("abcdefghijklmnoasdfa1sdpqrstuv18340")){
            System.out.println("Error №5 in one.");
        }
        if(one("5abcdefghijklmnoasdfasdpqrstuv18340")){
            System.out.println("Error №6 in one.");
        }
        if(one("a66bcdefghijklmnoasdfasdpqrstuv18340")){
            System.out.println("Error №7 in one.");
        }        if(one("abcdefghijklmnoasdfasdpqrstuv8340")){
            System.out.println("Error №8 in one.");
        }
    }

    public static void check2(){
        if(!two("{e02fa0e4-01ad-090A-c130-0d05a0008ba0}")){
            System.out.println("Error №1 in two.");
        }
        if(!two("e02fd0e4-00fd-090A-ca30-0d00a0038ba0")){
            System.out.println("Error №2 in two.");
        }
        if(!two("e02fd0e4-00fd-090A-ca30-0d00a00386a0")){
            System.out.println("Error №3 in two.");
        }
        if(!two("e02FD0e4-00fd-090A-ca30-0d00a0038ba0")){
            System.out.println("Error №4 in two.");
        }
        if(two("02fa0e4-01ad-090A-c130-0d05a0008ba0}")){
            System.out.println("Error №5 in two.");
        }
        if(two("e02fd0e400fd090Aca300d00a0038ba0 40")){
            System.out.println("Error №6 in two.");
        }
        if(two("02fa0e4-01ad-090A-c130-0d05a0008ba 0}")){
            System.out.println("Error №7 in two.");
        }
        if(two("e02fd0e400fd090Aca300d00a0038bagg")){
            System.out.println("Error №8 in two.");
        }
    }

    public static void check9(){
        if(!nine("+375-29-123-45-67")){
            System.out.println("Error №1 in nine.");
        }
        if(!nine("+375-44-123-45-67")){
            System.out.println("Error №2 in nine.");
        }
        if(!nine("+7-495-123-45-67")){
            System.out.println("Error №3 in nine.");
        }
        if(!nine("+375-29-976-17-95")){
            System.out.println("Error №4 in nine.");
        }
        if(nine("+3-75-123-45-67")){
            System.out.println("Error №5 in nine.");
        }
        if(nine("+7-49-123-45-67")){
            System.out.println("Error №6 in nine.");
        }
        if(nine("+05-29-123-45-67")){
            System.out.println("Error №7 in nine.");
        }
        if(nine("+7-49-12-45-67")){
            System.out.println("Error №8 in nine.");
        }
    }

    public static void main(String[] args){
        check7();
        ckeck6();
        check1();
        check2();
        check9();
    }
}
