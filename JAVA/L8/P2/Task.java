package LABS.L8.P2;

public class Task
{
    public static int min(int[] a) {
        int min = a[0];
        for (int i = 0; i < a.length; i++)
            min = Math.min(min, a[i]);
        return min;
    }
}