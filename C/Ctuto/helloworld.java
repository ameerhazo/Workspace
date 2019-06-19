import java.util.Locale;
import java.util.Random;
import java.util.Scanner;


public class helloworld 
{
    static int randomNumber;
    static Scanner userInput = new Scanner(System.in).useLocale(Locale.ENGLISH);
 
    public static void main(String[] args) 
    {
        System.out.println(getRandomNum());

        int guessResult = 1;
        int randomGuess = 0;

        while (guessResult != -1)
        {
            System.out.print("Random guess? :");

             randomGuess = userInput.nextInt();

             guessResult = checkGuess(randomGuess);

        }
        
        System.out.println("You guessed correctly");

        
        
    }

    public static int getRandomNum()
    {
        randomNumber = (int) (Math.random()* 51);
        return randomNumber;
    }
    public static int checkGuess(int guess)
    {
        if(guess == randomNumber)
        {
            return -1;
        }
        else
        {
           return 0;
        }
    }

}