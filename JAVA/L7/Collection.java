package LABS.L7;

public class Collection <T>{
    private T[] obj;
    private int len;
    private int count = 0;

    public Collection(int n){
        obj = (T[]) Factory.createArr(n);
        len = n;
    }

    public T[] getObj(){
        return obj;
    }

    public int getLen(){
        return len;
    }

    public int getCount(){
        return count;
    }

    public void setObj(T[] obj){
        this.obj = obj;
    }

    public void setLen(int len){
        this.len = len;
    }

    public void setCount(int count){
        this.count = count;
    }

    public void incCount(int i) {
        count += i;
    }
}