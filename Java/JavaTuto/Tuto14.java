import java.util.Arrays;
import java.util.LinkedList;

public class Tuto14{

 public static void main(String[] args) {

Animals genericAnimal = new Animals();

System.out.println(genericAnimal.getName());

System.out.println(genericAnimal.favFood);

Cats morris = new Cats("Morris","Tuna","Rubber Mouse");

System.out.println(morris.getName());

System.out.println(morris.favFood);

System.out.println(morris.favToy);

System.out.println(morris.getToy());


    
}



}