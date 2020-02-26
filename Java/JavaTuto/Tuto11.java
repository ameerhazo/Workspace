import java.util.ArrayList;
import java.util.Iterator;
import java.util.Arrays;

public class Tuto11{


 public static void main(String[] args) {
  
    ArrayList arrayListOne;

    arrayListOne = new ArrayList();

    ArrayList arrayListTwo = new ArrayList();

    ArrayList<String> names = new ArrayList<String>();

    names.add("John Smith");

    names.add("Mohamed Alami");

    names.add("Oliver Miller");

    names.add(2,"Jack Ryan");

    for(int i = 0; i < names.size(); i++)
    {

        System.out.println(names.get(i));

    }


    names.set(0, "John Adams");

    System.out.println();


    for(int i = 0; i < names.size(); i++)
    {

        System.out.println(names.get(i));

    }


    names.remove(3);

    System.out.println();

    for(int i = 0; i < names.size(); i++)
    {

        System.out.println(names.get(i));

    }

    // names.removeRange(0,1);

    System.out.println();

    for(int i = 0; i < names.size(); i++)
    {

        System.out.println(names.get(i));

    }

    System.out.println(names);



    for(String i : names)
    {

        System.out.println(i);

    }

    Iterator indivItems = names.iterator();

    while(indivItems.hasNext())
    {

        System.out.println(indivItems.next());
    }


    System.out.println();
    System.out.println();


    ArrayList nameCopy = new ArrayList();

    ArrayList nameBackup = new ArrayList();

    nameCopy.addAll(names);

    String paulYoung = "Paul young";

    names.add(paulYoung);

    if(names.contains(paulYoung))
    {

        System.out.println("Paul is here");

    }

    if(nameCopy.containsAll(names))
    {
        System.out.println("Everything in nameCopy is in names");

    }else{
        System.out.println("No");
    }

    names.clear();

    if(names.isEmpty())
    {

        System.out.println("ArrayList is empty");

    }

    Object [] moreNames = new Object[4];

    moreNames = nameCopy.toArray();

    System.out.println(Arrays.toString(moreNames));


    



}




}