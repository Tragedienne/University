package LABS.L6.P2;

import LABS.L3.P2.InOut;

public class Watch <Type extends InOut> {
    public void output(Collection<Type> collection){
        System.out.println("Collection:");
        int len = collection.getCount();
        if (len == 0)
            System.out.println("There are no elements!");
        Type [] temp = collection.getObj();
        for (int i = 0; i < len; i++){
            System.out.println("Element:" + i);
            temp[i].output();
        }
    }
}
