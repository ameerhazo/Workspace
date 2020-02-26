import java.util.LinkedList;
import java.util.Arrays;


public class Tuto12{


public static void main(String[] args) {

    LinkedList linkedListOne = new LinkedList();

    LinkedList<String> names = new LinkedList<String>();
    
    names.add("Ahmed Bennani");
    names.add("Ali Syed");

    names.addLast("Nathan Martin");

    names.addFirst("Joshua Smith");

    names.add(0,"Noah Peters");

    names.set(2, "Paul Newman");

    names.remove(4);

    names.remove("Joshua Smith");

    
    for(String name : names)
    {
        System.out.println(name);
    }

    System.out.println("\nFirst index: " + names.get(0));

    System.out.println("\nLast index: " + names.getLast());

    LinkedList<String> nameCopy = new LinkedList<String>(names);

    System.out.println("\nnameCopy: " + nameCopy);

    System.out.println();

    if(names.contains("Noah Peters"))
    {

        System.out.println("Noah is here");
                            
    }

    if(names.containsAll(nameCopy))
    {
        System.out.println("\nCollection the same");
    }

    System.out.println("\nAli's index is: " + names.indexOf("Ali Syed"));

    System.out.println("\nList empty: " +names.isEmpty());

    System.out.println("\nHow many: " + names.size());

    System.out.println("\nFirst index: " + names.get(0));

    System.out.println("\nFirst index: " + names.getFirst());

    System.out.println("\nLook without error: " + names.peek()); // peek returns the first item in the element

    System.out.println("\nLook without error: " + names.peekFirst()); //peek returns the first item in the element

    System.out.println("\nLook without error: " + names.peekLast());    //peekLast returns the last item in the element

    System.out.println("\nremove first element: " + nameCopy.poll()); //poll returns the first item in the element and then removes it

    System.out.println("\nnameCopy: " + nameCopy);

    System.out.println("\nremove first element: " + nameCopy.pollLast()); //pollLast returns the last item in the element and then removes it

    System.out.println("\nnameCopy: " + nameCopy);

    nameCopy.push("Noah Peeters");

    for(String name: nameCopy) //advanced for loop
    {
        System.out.println(name);
    }

    Object[] nameArray = new Object[4];

    nameArray = names.toArray(); // converts linked list to arrays

    System.out.println(Arrays.toString(nameArray)); // print out arrays

    names.clear();

   System.out.println("\nnameArray: " + nameArray);


}
}