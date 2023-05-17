package LABS.L8.P2;

public class Runner {
    public static void main(String[] args) throws InterruptedException {
        System.out.println("Main thread start.");
        //Массив ссылок
        Runnable runnables[] = new Runnable[4];
        //Создание объектов
        runnables[0] = new Runnable();
        runnables[1] = new Runnable();
        runnables[2] = new Runnable();
        runnables[3] = new Runnable();
        runnables[0].num = 1;
        runnables[1].num = 2;
        runnables[2].num = 3;
        runnables[3].num = 4;
        for (int i = 0; i < 4; i++) {
            //Рандомная размерность
            int n = (int) Math.round(Math.random() * 100);
            int a[] = new int[n];
            for (int j = 0; j < a.length; j++) {
                a[j] = (int) Math.round((Math.random() * 100));
            }
            runnables[i].a = a;
        }

        runnables[0].start();
        runnables[1].start();
        runnables[1].join();
        runnables[2].start();
        runnables[0].join();
        runnables[3].start();
        runnables[2].join();
        runnables[3].join();

        System.out.println("Main thread close.");
    }
}
