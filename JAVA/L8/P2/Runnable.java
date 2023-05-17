package LABS.L8.P2;

import java.util.Arrays;

public class Runnable extends Thread {
    public int num;
    public int[] a;

    public void run() {
        System.out.println("Thread " + num + " start.");
        System.out.println("Result " + num + " " + Arrays.toString(a) + "\n" + "Minimal: " + Task.min(a));
        System.out.println("Thread " + num + " close.");
    }
}

