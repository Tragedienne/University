package LABS.L6.P2;

import LABS.L3.P2.InOut;

public class Collection <T extends InOut>{
    private T[] obj;
    private int len;
    private int count = 0;
    private Types colType = Types.TIMETABLE;

    public Collection(Types type, int n){
        obj = (T[])Factory.createType(type, n);
        len = n;
        colType = type;
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

    public Types getColType(){
        return colType;
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

    public void setColType(Types colType){
        this.colType = colType;
    }

    public void incCount(int i) {
        count += i;
    }
}