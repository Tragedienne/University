package LABS.L9;

public abstract class Runnable<T> implements java.lang.Runnable {
    protected T element;

    public Runnable(T element) {
        this.element = element;
    }
}
