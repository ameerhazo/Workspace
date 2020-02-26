import java.util.Scanner;

public class Tuto5
{

    // static int a = 1;
    // static double myPI = 3.14159;

    static int randomNumber;

    static Scanner userInput = new Scanner(System.in);

    public static int getRandomNum()
    {
        randomNumber = (int) (Math.random() * 2);
        return randomNumber;
    }

    public static int checkGuess(int Number)
    {
        if(Number == randomNumber)
        {
           return -1;
        }
        else
        {
            return Number;
        }

    }
//     public static int addThem(int a, int b)
//     {
//        double smallPI = 3.140;

//        System.out.println("Global " + myPI);

//        return 1;
//     }

//     public static int hello(int b, int c)
// {
//     a = a + 1;
//     System.out.println(a);

//     return 1;
// }
//     public static void changeTo( int d)
//     {
//         d = d+1;

//         System.out.println(d);

//     }
 public static void main(String[] args) 
{
    // int d = 3;
    // changeTo(d);
    // System.out.println(d);

    // System.out.println(getRandomNum());
   
    System.out.println(getRandomNum());
    int guess;
    System.out.printf("Guess the random number = ");
    guess = userInput.nextInt();

    checkGuess(guess);

   
}
}