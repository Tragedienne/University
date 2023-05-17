package LABS.L5.P2;

import java.io.IOException;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Function {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("a: ");
        double a = scanner.nextDouble();
        System.out.println("b: ");
        double b = scanner.nextDouble();
        if (a > b) {
            double t = a;
            a = b;
            b = t;
        }

        double u;
        while (true) {
            try {
                System.out.println("Input u");
                u = scanner.nextDouble();
                break;
            } catch (Exception e) {
                System.out.println(e.getMessage());
                scanner.nextLine();
            }
        }

        double x;

        while (true) {
            try {
                System.out.println("Input x");
                x = scanner.nextDouble();
                System.out.println(function(a, b, u, x));
            } catch (InputMismatchException exception) {
                return;
            } catch (ArithmeticException exception) {
                System.out.println(exception.getMessage());
            }
        }
    }

    public static double function(double a, double b, double u, double x) throws ArithmeticException {
        if (x < a) {
            if (x + u < 0) {
                throw new ArithmeticException("Function 1 has Arithmetic Exception (x+u<0)");
            }
            return 3 + Math.pow(x + u, 1.0 / 4);
        } else if (x >= a && x <= b) {
            if (u - x * x < 0) {
                throw new ArithmeticException("Function 2 has Arithmetic Exception (u-x*x<0)");
            }
            return Math.sqrt(u - x * x);
        } else {
            if (-u * x + 5 <= 0) {
                throw new ArithmeticException("Function 3 has Arithmetic Exception (-ux + 5 <= 0)");
            }
            return Math.log(-u * x + 5);
        }
    }
}

