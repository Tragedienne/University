package LABS.L8.P1;

import java.util.Random;

public class Runnable extends Thread {
    public int num;

    public void run() {
        System.out.println("Thread " + num + " start.");
        Random random = new Random();
        try {
            Thread.sleep(random.nextInt(300));
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
        System.out.println("Thread " + num + " close.");
    }
}
