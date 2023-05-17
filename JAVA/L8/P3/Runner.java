package LABS.L8.P3;

public class Runner {
    public final static int SIZE = 48;
    public static void main(String[] args) throws InterruptedException {
        System.out.println("Main thread start.");
        Thread thread33 = new Thread(new Runnable(createRandomArray(SIZE),createRandomArray(SIZE),createRandomArray(SIZE),"thread.txt"));
        long time = System.nanoTime();
        thread33.start();
        thread33.join();

        time = System.nanoTime() - time;
        System.out.printf("Time 1 3 mas run =  %,2.3f ms\n", time/1_000_000.0);

        long avgTime = 0;
        for (int i = 0; i < 50; i++) {
            thread33 = new Thread(new Runnable2(createRandomArray(SIZE), i + "1.txt"));
            time = System.nanoTime();
            thread33.start();
            thread33.join();
            time = System.nanoTime() - time;
            avgTime += time;
        }
        System.out.printf("AVGTime for 1 3 mas 50 run =  %,2.3f ms\n", (avgTime/50)/1_000_000.0);
        Thread thread1 = new Thread(new Runnable2(createRandomArray(SIZE), "thread1.txt"));
        Thread thread2 = new Thread(new Runnable2(createRandomArray(SIZE), "thread2.txt"));
        Thread thread3 = new Thread(new Runnable2(createRandomArray(SIZE), "thread3.txt"));
        time = System.nanoTime();
        thread1.start();
        thread2.start();
        thread3.start();
        thread1.join();
        thread2.join();
        thread3.join();
        time = System.nanoTime() - time;
        System.out.printf("Time 3 1 mas run =  %,2.3f ms\n", (time)/1_000_000.0);
        for(int i = 0; i < 50; i++){
            thread1 = new Thread(new Runnable2(createRandomArray(SIZE), i + "th1.txt"));
            thread2 = new Thread(new Runnable2(createRandomArray(SIZE), i + "th2.txt"));
            thread3 = new Thread(new Runnable2(createRandomArray(SIZE), i + "th3.txt"));
            time = System.nanoTime();
            thread1.start();
            thread2.start();
            thread3.start();
            thread1.join();
            thread2.join();
            thread3.join();
            time = System.nanoTime() - time;
            avgTime += time;
        }
        System.out.printf("AVGTime for 3 50 run =  %,2.3f ms\n", (avgTime/50)/1_000_000.0);;
        System.out.println("Main thread close.");
    }

    public static int[] createRandomArray(int size){
        int[] array = new int[size];
        for (int i = 0; i < array.length; i++) {
            array[i] = (int) (Math.random() * 100);
        }
        return array;
    }
}