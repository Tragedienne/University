package LABS.L8.P1;

public class Runner {
    public static void main(String[] args) throws InterruptedException {
        System.out.println("Main thread start.");

        Runnable runnable[] = new Runnable[4];
        runnable[0] = new Runnable();
        runnable[1] = new Runnable();
        runnable[2] = new Runnable();
        runnable[3] = new Runnable();
        runnable[0].num = 1;
        runnable[1].num = 2;
        runnable[2].num = 3;
        runnable[3].num= 4;
        //Start - начало
        //Join - ждать завершения
        runnable[0].start();
        runnable[1].start();
        runnable[1].join();
        runnable[2].start();
        runnable[0].join();
        runnable[3].start();
        runnable[2].join();
        runnable[3].join();

        System.out.println("Main thread close.");
    }
}