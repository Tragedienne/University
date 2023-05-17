package LABS.L5.P1;
import java.util.Scanner;
public class Trapetsia {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a;
        while (true) {
            try {
                System.out.println("Input a");
                a = scanner.nextDouble();
                check(a);
                break;
            } catch (IllegalArgumentException e) {
                System.out.println(e.getMessage());
            } catch (Exception e){
                System.out.println(e.getMessage());
                scanner.nextLine();
            }
        }
        double b;
        while (true) {
            try {
                System.out.println("Input b");
                b = scanner.nextDouble();
                check(b);
                break;
            } catch (IllegalArgumentException e) {
                System.out.println(e.getMessage());
            } catch (Exception e){
                System.out.println(e.getMessage());
                scanner.nextLine();
            }
        }
        double c;
        while (true) {
            try {
                System.out.println("Input c");
                c = scanner.nextDouble();
                check(c);
                break;
            } catch (IllegalArgumentException e) {
                System.out.println(e.getMessage());
            } catch (Exception e){
                System.out.println(e.getMessage());
                scanner.nextLine();
            }
        }
        try {
            System.out.println(square(a,b,c));
        } catch (Exception exception){
            System.out.println(exception.getMessage());
        }
    }
    public static double square(double a, double b, double c) throws ArithmeticException{

        return (a + b) / 2 * Math.sqrt(c * c - ((a - b) * (a - b)) / 4);
    }

    public static boolean check(double a){
        if(a <= 0){
            throw new IllegalArgumentException("IllegalArgumentException a <= 0");
        }
        return true;
    }
}
