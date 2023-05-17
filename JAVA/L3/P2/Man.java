package LABS.L3.P2;
import java.util.Scanner;

public abstract class Man implements InOut {
    private String FIO;
    private String address;

    public Man(String FIO, String address){
        this.FIO=FIO;
        this.address=address;
    }

    public String getFIO(){
        return FIO;
    }

    public void setFIO(String FIO){
        this.FIO=FIO;
    }

    public String getAddress(){
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    //boolean isHome(String s )  { return 'is address contain s'}
    public abstract boolean home(String s);

    @Override
    public void fill(Scanner scanner){
        System.out.println("FIO: ");
        FIO= scanner.nextLine();
        System.out.println("Address: ");
        address= scanner.nextLine();
    }

    @Override
    public void output(){
        System.out.println(this);
    }

    @Override
    public String toString() {
        return "FIO = " + FIO +
                ", address = " + address + ", " ;
    }
}
