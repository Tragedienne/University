package LABS.L9;

public class Watch<T> {
    public void output(Collection<T> collection) {
        System.out.println("Collection:");
        for (int i = 0; i < collection.getCount(); i++) {
                System.out.println(i + " " + collection.getObj()[i].toString());
        }
    }
}
