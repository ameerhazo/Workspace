import java.util.Scanner;

public class CalcDim
{

    static Scanner userInput = new Scanner(System.in);
    
    
   

    public static void main(String[] args) 
    {
        int x,y,z;
        System.out.print("Base:");
        x = userInput.nextInt();
        System.out.print("Width:");
        y = userInput.nextInt();
        System.out.print("Height:");
        z = userInput.nextInt();

        Box Box1 = new Box(x,y,z);

        System.out.printf("The area of Box1 is %d",Box1.BoxArea());
        System.out.printf("\nThe volume of Box1 is %d", Box1.BoxVolume());

    }

}