#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    // DO WHILE AND SWITCH
    // int whatToDo = 0;

    // do
    // {
    //     printf("\n");
    //     printf("1. What time is it\n");
    //     printf("2. What is today's date\n");
    //     printf("3. What day is it?\n");
    //     printf("4. Quit\n");

    //     scanf("%d", &whatToDo);

    // } while (whatToDo < 1 || whatToDo > 4);



    // switch (whatToDo)
    // {
    //     case(1):
    //        printf("Print the time");
    //         break;
    //     case(2):
    //         printf("Print the time");
    //         break;
    //     case(3):
    //         printf("Print the day");
    //         break;
    //     default:
    //         printf("Bye Bye");
    //         exit(0);
    //         break;
    // }

    // if(whatToDo == 1)
    // {
    //     printf("Print the time");
    // }
    // else if (whatToDo == 2) {
       
    //    printf("Print the date");

    // }
    // else if (whatToDo == 3) {
    //    printf("Print the day");
    // }
    // else
    // {
    //     printf("Bye Bye");
    //     exit(0);
    // }
    
    // ARRAY

    printf("\n");

    char wholeName[] = "Ameer Haziq";

    int primeNum[] = {2,3,5};
    
    int morePrimes[] = {13,17,19,23};

    printf("The first prime in the list is %d\n\n",primeNum[0]);

    char thirdCity[] = "Paris";
    
    char city[7] = {'C','h','i','c','a','g','o'};
    
    // for(int i = 0; i <  sizeof(city) ; i++)
    // {
    //     printf("%c",city[i]);
    // }

    //fgets
    char yourCity[30];
    printf("What city do you live in?");

    fgets(yourCity, 30, stdin);

    //printf("%s", yourCity);

    printf("Hello %s\n\n", yourCity);

    for(int i = 0; i < 30 ; i++)
    {
        if(yourCity[i] == '\n')
        {
            yourCity[i] = '\0';
            break;
        }
    }
    printf("Hello %s\n\n", yourCity);

    printf("Is your city Paris? %d\n\n");

    strcmp(yourCity,thirdCity);

    char yourState[] = ", Pennsylvania";

    strcat(yourCity,yourState);

printf("You live in %s\n\n",yourCity);

printf("Letters in Paris: %d\n\n",strlen(thirdCity));

strncpy(yourCity, "Kuala Lumpur",sizeof(yourCity));

printf("New City is %s",yourCity);
}