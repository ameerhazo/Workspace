#include <stdio.h>
#include <stdlib.h>

// void main()
// {

//     int rand1 = 12, rand2 = 15;

// // prints out the address of the memory where the variable is saved
//     printf("rand1 = %p, rand2 = %p\n\n",&rand1,&rand2);// in hex

//     printf("rand1 = %d, rand2 = %d\n\n",&rand1,&rand2);//in decimal form


//     printf("size of int %d\n\n", sizeof(rand1));// size of the variable = 4

//     int * pRand1 = &rand1; //  This variable only contains the address but variable name is changed
    
//     printf("Pointer %p\n\n",pRand1);

//     printf("Pointer %d\n\n",pRand1);

//     printf("Value %d\n\n", *pRand1); // prints out the value saved on the address use * to dereference and get value from said address.
// }

// void main()
// {

//     int primeNumbers[] = {2,3,5,7};

//     printf("First index: %d\n\n",primeNumbers[1]);

//     printf("First index: %d\n\n",*(primeNumbers+1));



// }

// void main()
// {
//     char *students[] = {"Sally","Mark","Paul","Sue"};

//     for(int i = 0; i < 4; i++)
//     {

//         printf("%s = %d\n",students[i],&students[i]);// prints out the name of the student and the address saved.

//     }

// }

//////////////////////////////////////////////////////////////////////////////////////////////
// void pointerRandomNumbers(int* rand1,int* rand2) // * used to get access to the value of 
// {

//     *rand1 = rand() % 50 + 1;
//     *rand2 = rand() % 50 + 1;

//     printf("New rand1 in function = %d\n\n",*rand1);

//     printf("New rand2 in function = %d\n\n",*rand2);


// }

// void main()
// {

//     int rand1 = 0, rand2 = 0;

//     // generateTwoRandomNums(rand1,rand2);
//     printf("rand1 before call function = %d\n\n",rand1);

//     printf("rand2 before call function = %d\n\n",rand2);
    
//     pointerRandomNumbers(&rand1,&rand2); // & used to pass address to change

//     printf("rand1 after call function = %d\n\n",rand1);

//     printf("rand2 after call function = %d\n\n",rand2);

// }
////////////////////////////////////////////////////////////////////////////////////////////

void editMessageSent(char* message, int size)
{
char newMessage [] = "New Message";

if(size > sizeof(newMessage))
{
    for(int i = 0; i < sizeof(newMessage); i++)
    {
        message[i] = newMessage[i];
    }
}else 
{
    printf("Message is shorter than original message");
}
}
void main()
{
 char randomMessage[] = "Edit my message";

 editMessageSent(randomMessage,sizeof(randomMessage));

 printf("New Message : %s\n\n",randomMessage);

}

