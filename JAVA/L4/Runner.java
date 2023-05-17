package LABS.L4;
/*
Task A:
8.Дана строка. Разделить строку на фрагменты по три подряд идущих символа.
В каждом фрагменте средний символ заменить на случайный символ,
не совпадающий ни с одним из символов этого фрагмента. Показать фрагменты, упорядоченные по алфавиту.

9.Дана строка, состоящая из слов, разделенных символами, которые перечислены во второй строке. Показать все слова.

12.Дан текст. Некоторые его фрагменты выделены группами символов ##.
Заменить выделение группами символов '<' и '>'.
Пример: 'Это ##тестовый пример## для задачи ##на## строки' преобразуется в
 'Это <тестовый пример> для задачи <на> строки'.

Task B:
13.Осуществить сжатие английского текста, заменив каждую группу из двух или более рядом стоящих символов,
на один символ, за которым следует количество его вхождений в группу.
К примеру, строка hellowoooorld должна сжиматься в hel2owo4rld.
 */
import java.util.Random;
import java.util.Scanner;

public class Runner {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter string1:");
        StringBuilder str1 = new StringBuilder(scan.nextLine());
        System.out.println(func1(str1));
        System.out.println("Enter string2:");
        StringBuilder str2 = new StringBuilder(scan.nextLine());
        System.out.println("Enter str:");
        StringBuilder str = new StringBuilder(scan.nextLine());
        System.out.println(func2(str2, str) + "\nEnter string3:");
        StringBuilder str3 = new StringBuilder(scan.nextLine());
        System.out.println(func3(str3) + "\nEnter string4:");
        StringBuilder str4 = new StringBuilder(scan.nextLine());
        System.out.println(func4(str4));
    }

    public static StringBuilder func1(StringBuilder str){
        for(int i = 3; i < str.length(); i += 4){
            str.insert(i, "\n");
        }
        for(int i = 1, leni = str.length() - 1; i < leni; i += 4){
            do{
                Random random = new Random();
                str.setCharAt(i, (char)(random.nextInt(100))) ;
            }
            while (str.charAt(i) == str.charAt(i - 1) || str.charAt(i) == str.charAt(i + 1));
        }
        String[] words = str.toString().split("\n");
        for(int i = 0; i < words.length - 1; ++i)
            for (int j = i + 1 ; j < words.length; ++j)
                if(words[i].compareTo(words[j]) > 0) {
                    String temp = words[i];
                    int pointi = str.indexOf(words[i]), leni = words[i].length();
                    int pointj = str.indexOf(words[j], pointi + leni), lenj = words[j].length();
                    str.delete(pointi, pointi + leni);
                    str.insert(pointi, words[j]);
                    pointj += lenj - leni;
                    str.delete(pointj, pointj + lenj);
                    str.insert(pointj, temp);
                    words[i] = words[j];
                    words[j] = temp;
                }
        return str;
    }

    public static StringBuilder func2(StringBuilder str, StringBuilder list) {
        for (int i = 0, leni = str.length(); i < leni; i++)
            for (int j = 0, lenj = list.length(); j < lenj; j++)
                if (str.charAt(i) == list.charAt(j))
                    str.setCharAt(i, '\n');
        for (int i = 0; i < str.length() - 1; i++) {
            int kol = 1;
            for (int j = i + 1; j < str.length() && str.charAt(i) == str.charAt(j) && str.charAt(i) == '\n'; j++)
                kol++;
            if (kol > 1)
                str.delete(i + 1, i + kol);
        }
        if (str.charAt(0)=='\n')
            str.delete(0,1);
        return str;
    }

    public static StringBuilder func3(StringBuilder str) {
        while (str.indexOf("##") >= 0) {
            int point = str.indexOf("##");
            str.delete(point, point + 2);
            if (str.indexOf("##") >= 0) {
                str.insert(point, "<");
                point = str.indexOf("##");
                str.delete(point, point + 2);
                str.insert(point, ">");
            }
            else {
                str.insert(point, "##");
                return str;
            }
        }
        return str;
    }

    public static StringBuilder func4(StringBuilder str) {
        for (int i = 0; i < str.length() - 1; i++) {
            int kol = 1;
            for (int j = i + 1; j < str.length() && str.charAt(i) == str.charAt(j); j++)
                ++kol;
            if (kol > 1) {
                str.delete(i + 1, i + kol);
                str.insert(i + 1, kol);
            }
        }
        return str;
    }
}