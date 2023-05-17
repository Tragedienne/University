package LABS.L6.P1;

import LABS.L3.P2.Timetable;
import java.util.Scanner;

public class Runner {
    public static void printMenu(String [] mas) {
        for(int i = 0; i < mas.length; i++)
            System.out.println(i + ". " + mas[i]);
    }

    public static int scanMenu(String [] mas, Scanner scan) throws CollExceptions {
        int n;
        while (true) {
            try {
                System.out.println("Choose option: ");
                n = Integer.parseInt(scan.nextLine());
                break;
            }
            catch (IllegalArgumentException e) {
                System.out.println("That not a number!");
            }
        }
        if (n > mas.length - 1 || n < 0)
            throw new CollExceptions("Option " + n + " does not exist");
        return n;
    }

    public static int indexRead() {
        Scanner scan = new Scanner(System.in);
        int j;
        while (true) {
            try {
                System.out.println("Enter the index of element:");
                j = Integer.parseInt(scan.nextLine());
                break;
            }
            catch (IllegalArgumentException e) {
                System.out.println("It is not a number!");
            }
        }
        return j;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n;
        while (true) {
            try {
                System.out.println("Enter collection size: ");
                n = Integer.parseInt(scan.nextLine());
                if (n <= 0)
                    throw new NegativeArraySizeException("Invalid value (n <= 0)");
                break;
            }
            catch (IllegalArgumentException e) {
                System.out.println("That not a number!");
            }
            catch (NegativeArraySizeException e) {
                System.out.println(e.getMessage());
            }
        }
        Modification modification = new Modification(new Collection(n), new Watch());
        String[] menuOptions = new String[]{"Exit", "Add element", "Update element", "Delete element", "Show"};
        int option;
        boolean exitMenu = false;
        while(!exitMenu) {
            printMenu(menuOptions);
            try {
                option = scanMenu(menuOptions, scan);
            }
            catch (CollExceptions e) {
                System.out.println(e.getMessage());
                scan.nextLine();
                continue;
            }
            switch (option) {
                case 0 -> exitMenu = true;
                case 1 -> modification.add(new Timetable());
                case 2 -> modification.update(indexRead());
                case 3 -> modification.delete(indexRead());
                case 4 -> modification.outCollection();
            }
        }
//                case 1 -> modification.add(element);
//                                        update / delete (index)
    }
}