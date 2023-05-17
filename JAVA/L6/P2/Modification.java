package LABS.L6.P2;

import LABS.L3.P2.InOut;
import java.util.Scanner;

public class Modification<T extends InOut> {
    private Collection<T> collection;
    private Watch<T> watch;

    public Modification(Collection<T> collection, Watch<T> watch) {
        this.collection = collection;
        this.watch = watch;
    }

    public void add(T element) {
        if (collection.getCount() == collection.getLen()) {
            T [] oldC = collection.getObj();
            T [] newC = (T [])Factory.createType(collection.getColType(), oldC.length * 2);
            System.arraycopy(oldC, 0, newC, 0, oldC.length);
        }
        element.fill(new Scanner(System.in));
        collection.getObj()[collection.getCount()] = element;
        collection.incCount(1);
    }

    public void update(int j) {
        try {
            if (j >= collection.getLen())
                throw new Exception("Index greater than collection length!");
            if (j >= collection.getCount())
                throw new Exception("Element with such index does not exist!");
            if (j < 0)
                throw new Exception("index >= 0!");
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
            return;
        }
        collection.getObj()[j].fill(new Scanner(System.in));
    }

    public void delete(int j) {
        try {
            if (j >= collection.getLen())
                throw new Exception("Index greater than collection length!");
            if (j >= collection.getCount())
                throw new Exception("Element with such index does not exist!");
            if (j < 0)
                throw new Exception("index >= 0!");
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
            return;
        }
        T [] temp = collection.getObj();
        int len = collection.getLen();
        for(int i = j; i < len - 1; ++i)
            temp[i] = temp[i + 1];
        collection.incCount(-1);
    }
    public void output() {
        watch.output(collection);
    }
}