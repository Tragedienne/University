package LABS.L6.P3;

import LABS.L3.P2.Cabinet;
import LABS.L3.P2.Man;

import java.util.Scanner;

import static java.lang.Integer.parseInt;

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
                System.out.println("It is not a number!");
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
        FileColl FileColl = new FileColl(new Collection<Man>(1), new Watch<Man>());
        String[] menuOptions = new String[]{"Exit", "Add element", "Update element", "Delete element", "Show", "Write to file", "Read from file"};
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
                case 0 :
                    exitMenu = true;
                    break;
                case 1 :
                    Factory.printType();
                    Man man;
                    while (true) {
                        try {
                            man = (Man)Factory.createObject(scan.nextLine());
                            break;
                        }
                        catch (Exception e) {
                            System.out.println("Try again, please))");
                        }
                    }
                    man.fill(scan);
                    FileColl.add(man);
                    break;
                case 2 :
                    FileColl.update(indexRead());
                    break;
                case 3 :
                    FileColl.delete(indexRead());
                    break;
                case 4 :
                    FileColl.output();
                    break;
                case 5:
                    FileColl.writeToFile(scan);
                    break;
                case 6:
                    FileColl.readFromFile(scan);
                    break;
            }
        }
    }
}
