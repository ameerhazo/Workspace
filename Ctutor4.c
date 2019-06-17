#include <stdio.h>
#include <stdlib.h>


// void main(){

// int rand1 = 12, rand2 = 15;

// printf("rand1 = %p : rand2 = %p\n\n",&rand1,&rand2);
// printf("rand1 = %d : rand2 = %d\n\n",&rand1,&rand2);

// printf("Size of int %d\n\n",sizeof(rand1));

// int * pRand1 = &rand1;

// printf("Pointer %p\n\n",pRand1);

// printf("Value %d\n\n",*pRand1);

// }/////////////////////////////////////

// void main(){

// int primeNum[] = {2,3,5,7};
// //Array with pointers
// printf("First  index : %d\n\n",primeNum[1]);

// printf("First  index : %d\n\n",*(primeNum + 1));

// }//////////////////////////////////////////

//Students example

// void main(){

//     char *students[] = {"Sally","Mark","Paul","Sue"};

//     for(int i = 0; i < sizeof(students); i++)
//     {
//     printf("%s : %d \n\n",students[i],&students[i]);
//     }
// }
///////////////////////////////////////////////

// void pointerTwoRandomNums(int* x , int* y)
// {
//     *x = rand() % 50 + 1;
//     *y = rand() % 50 + 1;

//     printf("New rand1 in function = %d\n\n",*x);

//     printf("New rand2 in function = %d\n\n",*y);
    
// }

// void main()
// {
//     int rand1 = 0, rand2 = 0;

//     printf("Main before function\n\n");

//     printf("rand 1 = %d\n\n",rand1);

//     printf("rand 2 = %d\n\n",rand2);

// pointerTwoRandomNums(&rand1,&rand2);

// printf("after function is called\n\n");

// printf("rand 1 = %d\n\n",rand1);

//     printf("rand 2 = %d\n\n",rand2);}

/////////////////////////////

// void editMessageSent(char* message , int size)
// {
//     char newMessage[] = "New Message";

//     if (size > sizeof(newMessage))
//     {
//         for(int i = 0; i < sizeof(newMessage); i++)
//         {
//             message[i] = newMessage[i];
//         }
//     }
//     else
//     {
//         printf("Message is too short");
//     }
// }


// void main()
// {

// char randomMessage[] = "Edit my function";

// printf("Old message = %s\n\n",randomMessage);

// editMessageSent(randomMessage,sizeof(randomMessage));

// printf("New Message = %s\n\n",randomMessage);

// }


// void IntMULT2add(int* a, int* b)
// {
//     *a = *a * 2;
//     *b = *b * 2;


// }

// void main()
// {
//     int a = 1, b = 2;



//     printf("a + b before changing a and b = %d\n\n",a+b);

//     IntMULT2add(&a,&b);

//    printf("a + b after changing a and b = %d\n\n",a+b);

  

//    printf("a = %d\n\n",a);

// }


//post increment/decrement

void main()
{
    int a = 10;
    while(--a > 5)
    {
        
        printf("a = %d\n\n",a);
        
    }
}