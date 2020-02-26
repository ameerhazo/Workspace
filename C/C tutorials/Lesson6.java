import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.*;
public class Lesson6

{

    static Scanner userInput = new Scanner(System.in);
 public static void main(String[] args) {  
try {
    getaFile("someText");
} catch (IOException e) {
    System.out.println("An IO error occured");
}
  

}
public static void getaFile(String FileName) throws IOException, FileNotFoundException {

    FileInputStream file = new FileInputStream(FileName);
}
   
}
