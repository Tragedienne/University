package LABS.L9;

import LABS.L3.P2.Teacher;

import java.util.Random;

public class Running {
    public static void main(String[] args) throws InterruptedException {
        FileColl FileColl = new FileColl(new Collection<>(1), new Watch<>());
        for (int i = 0; i < 10; i++) {
            Random random = new Random();
            int option = random.nextInt(5);
            System.out.println(option);
            switch (option){
                case 0 :
                    System.out.println("ADD");
                    new Thread(new Runnable<>((Teacher) Factory.createObject()) {
                        public void run() {
                            FileColl.add(this.element);
                        }
                    }).start();
                    break;
                case 1 :
                    System.out.println("UPDATE");
                    new Thread(new Runnable<>(0) {
                        public void run() {
                            FileColl.update(this.element);
                        }
                    }).start();
                    break;
                case 2 :
                    System.out.println("DELETE");
                    new Thread(new Runnable<>(0) {
                        public void run() {
                            FileColl.delete(this.element);
                        }
                    }).start();
                    break;
                case 3 :
                    System.out.println("SHOW");
                    new Thread(() -> FileColl.output()).start();
                    break;
                case 4:
                    System.out.println("File input");
                    new Thread(new Runnable<>("1.txt") {
                        public void run() {
                            FileColl.writeToFile(this.element);
                        }
                    }).start();
                    break;
                case 5:
                    System.out.println("File output ");
                    new Thread(new Runnable<>("1.txt") {
                        public void run() {
                            FileColl.readFromFile(this.element);
                        }
                    }).start();
                    break;
            }
            Thread.sleep(100);
            FileColl.output();
        }
    }
}
