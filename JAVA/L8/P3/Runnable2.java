package LABS.L8.P3;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Runnable2 implements java.lang.Runnable {
    private int[] array;
    private String fileName;

    public Runnable2(int[] array, String fileName) {
        this.array = array;
        this.fileName = fileName;
    }

    @Override
    public void run() {
        try{
            writeToFile(fileName);
            readFormFile(fileName);
            Arrays.sort(array);
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
    public void readFormFile(String fileName) throws IOException {
        FileReader fileReader = new FileReader(fileName);
        Scanner fileScanner = new Scanner(fileReader);
        String[] array2 = fileScanner.nextLine().split(",");
        for (int i = 0; i < array.length; i++) {
            array[i] = Integer.parseInt(array2[i]);
        }
        fileReader.close();
    }

    public void writeToFile(String fileName) throws IOException {
        FileWriter fileWriter = new FileWriter(fileName);
        for(int i = 0;i < array.length; i++){
            fileWriter.write(array[i] + ",");
        }
        fileWriter.close();
    }
}

