#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void noMoreNewLine(char *theString)
{

    char *isaNewLine;

isaNewLine = strrchr(theString, '\n');

if(isaNewLine)
{

*isaNewLine = '\0';

}
}

void makeLowerCase(char *theString)
{
    int i = 0;

    while(theString[i])
    {

        theString[i] = tolower(theString[i]);
        
        // putchar(tolower(theString[i]));
        i++;

    }

    // printf("\n");

    // printf(theString);

}

void getCharInfo()
{
    char theChar;

    while((theChar = getchar()) != '\n\')
    {
        printf("Letter or Number %d\n\n"),
    }

}

void main()
{

// _Bool isANumber;

// int number;
// int sumOfNumbers = 0;

// printf("Enter a number:");

// isANumber = (scanf("%d",&number) == 1);

// while (isANumber)
// {
//     sumOfNumbers = sumOfNumbers + number;

//     printf("Enter a number:");

//     isANumber = (scanf("%d",&number) == 1);

// }

// printf("The sum of the numbers are %d", sumOfNumbers);


// char theChar;

// while((theChar = getchar()) != '~' )
// {

//     putchar(theChar);



// }

// char name[50];

// printf("What is your name:");

// gets(name);

// puts("Hi");
// puts(name);

// fgets(name,50,stdin);

// fputs("Hi ",stdout);
// fputs(name,stdout);


// char *randomString = "Just some random stuff";

// // while(*randomString)
// // {

// //     putchar(*randomString++);
// // }

// int i = 0;

// while(randomString[i] != '\0')
// {

//     putchar(randomString[i++]);
// }


// char doYouWantToQuit[10];

// printf("Enter quit to quit: ");

// fgets(doYouWantToQuit,10,stdin);

// noMoreNewLine(doYouWantToQuit);

// makeLowerCase(doYouWantToQuit);


// while(strcmp(doYouWantToQuit, "quit"))
// {
// printf("\n");

// printf("Enter quit to quit: ");

// fgets(doYouWantToQuit,10,stdin);

// noMoreNewLine(doYouWantToQuit);

// makeLowerCase(doYouWantToQuit);

// }


// printf("Thank you for typing %s",doYouWantToQuit);


///////////////////////////////////////////////




}