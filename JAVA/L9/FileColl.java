package LABS.L9;

import LABS.L3.P2.*;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

public class FileColl extends Modification<Man> {
    public FileColl(Collection<Man> collection, Watch<Man> watch){
        super(collection, watch);
    }

    public void writeE(Man man, FileWriter fileWriter){
        try{
            if(man instanceof Pupil){
                Pupil pupil = (Pupil) man;
                fileWriter.write("\nPupil:");
                fileWriter.write("\nFIO:" + pupil.getFIO());
                fileWriter.write("\nAddress:" + pupil.getAddress());
                fileWriter.write("\nSex:" + pupil.getSex());
                fileWriter.write("\nBirthday:" + new SimpleDateFormat("dd MM yyyy").format(pupil.getBirthday()));
                fileWriter.write("\nYearEnter:" + new SimpleDateFormat("dd MM yyyy").format(pupil.getYearEnter()));
                fileWriter.write("\nYearIssue:" + new SimpleDateFormat("dd MM yyyy").format(pupil.getYearIssue()));
                fileWriter.write("\nClass:" + pupil.getClas());
            }
            if(man instanceof Teacher){
                Teacher teacher = (Teacher) man;
                fileWriter.write("\nTeacher:");
                fileWriter.write("\nFIO:" + teacher.getFIO());
                fileWriter.write("\nAddress:" + teacher.getAddress());
                fileWriter.write("\nPhoneNumber:" + teacher.getPhoneNumber());
                fileWriter.write("\nTitle:" + teacher.getTitle());
                fileWriter.write("\nSubject:" + teacher.getSubject());
            }
        }
        catch (IOException e){
            System.out.println(e.getMessage());
        }
    }

    public void writeToFile(String filename){
        reentrantLock.lock();
        try {
            FileWriter fileWriter = new FileWriter("D:\\УНИВЕР\\3К1С\\РПС и СПП\\LAB3\\src\\LABS\\L9\\" + filename, true);
            Man[] mas = getCollection().getObj();
            for(int i = 0; i < getCollection().getLen(); i++){
                writeE(mas[i], fileWriter);
            }
            fileWriter.close();
        }
        catch (IOException e){
            System.out.println(e.getMessage());
        }
        reentrantLock.unlock();
    }

    private String s(Scanner scan){
        return scan.nextLine().split(":")[1];
    }

    public Man readE(Scanner scan, String type){
        Man man = new Pupil();
        if (type.equals("Pupil:")){
            Pupil pupil = new Pupil();
            pupil.setFIO(s(scan));
            pupil.setAddress(s(scan));
            pupil.setSex(s(scan));
            try {
                pupil.setBirthday(new SimpleDateFormat("dd MM yyyy").parse(s(scan)));
                pupil.setYearEnter(new SimpleDateFormat("dd MM yyyy").parse(s(scan)));
                pupil.setYearIssue(new SimpleDateFormat("dd MM yyyy").parse(s(scan)));
            }
            catch (Exception e) {
                System.out.println(e.getMessage());
            }
            man = pupil;
        }
        if (type.equals("Teacher:")){
            Teacher teacher = new Teacher();
            teacher.setFIO(s(scan));
            teacher.setAddress(s(scan));
            teacher.setPhoneNumber(s(scan));
            teacher.setTitle(Title.valueOf(s(scan)));
            teacher.setSubject(Subject.valueOf(s(scan)));
            man = teacher;
        }
        return man;
    }

    public void readFromFile(String filename){
        reentrantLock.lock();
        try {
            FileReader fileReader= new FileReader("D:\\УНИВЕР\\3К1С\\РПС и СПП\\LAB3\\src\\LABS\\L9\\" + filename);
            Scanner fileScanner = new Scanner(fileReader);
            String type = fileScanner.nextLine();
            while (true) {
                if (type.equals("Teacher:") || type.equals("Pupil:"))
                    add(readE(fileScanner, type));
                try {
                    type = fileScanner.nextLine();
                }
                catch (Exception e){
                    break;
                }
            }
            fileReader.close();
        }
        catch (IOException e){
            System.out.println(e.getMessage());
        }
        reentrantLock.unlock();
    }
}
