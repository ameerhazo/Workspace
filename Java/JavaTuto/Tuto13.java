import java.util.Arrays;

public class Tuto13{
 public static void main(String[] args) {

String randomString = "I'm just a random string";

String gotToQuote = "He said, \"I'm here\""; // \"\" to use quotations in a String

System.out.println(randomString);

System.out.println(gotToQuote);

int numTwo = 2;

System.out.println(randomString + " " + numTwo);

// converting primitive types to a string with toString

// String byteString = Byte.toString(bigByte) current datatype.toString(variable you want to change to string)

// converting string to primitive type = parsing
// example 
// int stringToInt = Integer.parseInt(intString); // datatype to convert to. parse datatype to conver to (string to convert)

String uppercaseStr = "BIG";

String lowercaseStr = "big";

if(uppercaseStr.equals(lowercaseStr))
{

    System.out.println("They're equal");

}else{
    System.out.println("They're not equal");
}

String letters = "abcde";

String moreLetters = "fghijk";

System.out.println("2nd char: " + letters.charAt(1));

System.out.println(moreLetters.compareTo(letters));

System.out.println(letters.contains("abc"));

System.out.println(letters.endsWith("de"));

System.out.println(letters.indexOf("cd"));

System.out.println(letters.indexOf("c",0));

System.out.println(letters.lastIndexOf("e"));

System.out.println("\nLength:" +letters.length());

System.out.println(letters.replace("abc", "xy"));

System.out.println(letters);

String[] letterArray = letters.split("");

System.out.println(Arrays.toString(letterArray));

char[] charArray = letters.toCharArray();

System.out.println(Arrays.toString(charArray));

System.out.println(letters.substring(1,4));

System.out.println(letters.toUpperCase()); // toupper and lower

String newString = "           abfgfhfj              ";

System.out.println(newString.trim());

StringBuilder randSB = new StringBuilder("A random value");

System.out.println(randSB.append("again"));

System.out.println(randSB.delete(15, 21));

randSB.ensureCapacity(60); //set minimum capacity of String

System.out.println(randSB.capacity());

System.out.println(randSB.length()); //amount of items in it

randSB.trimToSize();

System.out.println(randSB.capacity());

System.out.println(randSB.insert(1,"nother"));

String oldSB = randSB.toString();






























 





  
}












}