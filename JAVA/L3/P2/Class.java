package LABS.L3.P2;

import java.util.Locale;

public enum Class {
    MATH(10),
    CHEMISTRY(15),
    lINGV(7);

    private int numberOfPupils;

    Class(int numberOfPupils){
        this.numberOfPupils = numberOfPupils;
    }
    public int getNumber() {
        return numberOfPupils;
    }

    @Override
    public String toString() {
        return this.name().toLowerCase(Locale.ROOT) ;
    }
}

