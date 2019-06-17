
import java.util.Scanner;
 class FirstSteps 
{
static String randomString = "Hello World";
static final int X = 1;
static final double PINUM = 3.141529;
static Scanner in = new Scanner(System.in);
     public static void main(String[] args) 
     {
        //byte BigByte = 127;
        // short bigShort = 32767;
        // int BigInteger = 314;
        // String byteString = Byte.toString(BigByte);
        // String shortString = Short.toString(bigShort);
        // double aDoubleValue = 3000000000000000000.145646464;
        // int DoubletoInt = (int) aDoubleValue;
        // String intString = Integer.toString(BigInteger);
        // int stringtoint = Integer.parseInt(intString);
        // System.out.println("y is equal to " + y + ' ' +  "and is less than 0");
        // int y = in.nextInt();
        // int ytimestwo = y + y;
        // int yminustwo = y - 2;
        // int ytimesy = y*y;
        // int ymodulo2 = y % 2;
        // System.out.println(y + "+" + y +  "=" + ytimestwo );
            // System.out.println(y + "-2=" + yminustwo );
            // System.out.println(y + "*" +y+ "=" +ytimesy);
            // System.out.println("y modulo 2 = "+ ymodulo2);
            // y++;
            // System.out.println(y);
            // int numberABS = Math.abs(y);
            // System.out.println(numberABS);
            // int whichisBigger = Math.max(y,7);
            // int whichisSmaller = Math.min(y,7);
            // System.out.println(whichisBigger);
            // System.out.println(whichisSmaller);
            // double numSqrt = Math.sqrt(y);
            // int numCeiling = (int) Math.ceil(PINUM);
            // int numFloor = (int) Math.floor(PINUM);
            // int numRound = (int) Math.round(PINUM);
            //  int randomNumber = (int) (Math.random() * 11);
            // System.out.println(numCeiling);
            // System.out.println(numFloor);
            // System.out.println(numRound);
            // System.out.println(randomNumber);
            // int randomNumber = (int) (Math.random() * 50);
            // if (randomNumber < 25)
            // {
            //     //System.out.println("Number is" + ' ' + randomNumber + ' ' + "which is less than 25");
            //     System.out.println("Random number is less than 25");
            // }
            // // else if (randomNumber > 40)
            // // {
            // //     //System.out.println("Number is" + ' ' + randomNumber + ' ' + "which is more than 25");
            // //     System.out.println("Random number is more than 40");
            // // }
            // // else
            // // {
            // //     System.out.println("Nothing worked!");
            // // }
            //     System.out.println("Random number is " + randomNumber);

            // if(!(false))
            // {
            //     System.out.println("yes");
            // }
            // if((true) && (true))
            // {
            //     System.out.println("Both are true");
            // }
                // int valueOne = 1;
                // int valueTwo = 2;

                // int biggestValue = (valueOne > valueTwo) ? valueOne:valueTwo;

                // System.out.println(biggestValue);
                System.out.println("Grade?");
                char theGrade = in.next().charAt(0);

                switch(theGrade)
                {
                    case 'A':
                    System.out.println("Very good!");
                    break;
                    case 'B':
                    System.out.println("Good");
                    break;
                    case 'C':
                    System.out.println("Satisfactory");
                    break;
                    case 'D':
                    System.out.println("Work harder");
                    break;
                    default:
                    System.out.println("You failed");
                    break; 
                }


    }
}