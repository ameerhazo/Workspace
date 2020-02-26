#include <stdio.h>
#include <stdlib.h> //needed for exit()


int globalVar = 0;

int addTwoInts(int num1, int num2)
{
    return num1 + num2;
}

void changeVariables()
{

int age = 40;

globalVar = 30;

printf("age inside a function = %d\n\n",age);

printf("globalVar inside a funtion = %d\n\n",globalVar);

}


void main(){

int totalInt = addTwoInts(3,4);

printf("%d\n\n",totalInt);

int age = 10;



printf("age before a call to the function = %d\n\n",age);

printf("globalVar before a call to the function = %d\n\n",globalVar);

changeVariables();

printf("age before a call to the function = %d\n\n",age);

printf("globalVar before a call to the function = %d\n\n",globalVar);

}

