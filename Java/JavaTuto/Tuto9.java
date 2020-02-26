import java.util.Arrays;


public class Tuto9
{

 public static void main(String[] args) 

{
    int [] NumArrays;

    NumArrays = new int [10];

    int [] randomArray = new int[20];

    randomArray[1] = 2;

    String [] stringArray = {"just","random","words"};
    

    for(int i = 0; i < stringArray.length; i++)
    {

        System.out.print(stringArray[i]);


    }

    System.out.println();

    int k = 1;
    
    while(k<10)
    {
        System.out.print("-");
        k++;
    }
    System.out.println();

    for(int j = 0; j < NumArrays.length; j++)
    {

        System.out.print("|" + j + " ");

    }

    String [] [] multiArray = new String [10] [10];

    for(int i = 0; i < multiArray.length; i++)
    {

        for(int j = 0; j < multiArray[i].length; j++)
        {

            multiArray[i][j] = i + " " + j;




        }




    }

     k = 1;
    
    while(k<10)
    {
        System.out.print("-");
        k++;
    }
    System.out.println();

    for(int i = 0; i < multiArray.length; i++)
    {

        for(int j = 0; j < multiArray[i].length; j++)
        {

            System.out.print("|" + multiArray[i][j] + " ");
            


        }




    }
    System.out.print("|");

    for(int i = 0; i<NumArrays.length; i++)
    {

        NumArrays[i] = i;

    }

    System.out.println();

    for(int row: NumArrays)
    {
        System.out.print(row);
    }
    System.out.println("\n");



    for(String[] rows: multiArray)
    {
        for(String column: rows)
        {
            
        }
    }


}
    
}