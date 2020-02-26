#include <stdio.h>
#include <stdlib.h>

// int main()
// {

//     int amtOfNumbersStored;

//     printf("How many numbers do you want to store: ");

//     scanf("%d",&amtOfNumbersStored);

//     int * pRandomNumber;

//     pRandomNumber = (int *)malloc(amtOfNumbersStored * sizeof(int));

//     if(pRandomNumber != NULL)
//     {

//         int i = 0;

//         printf("Enter a number or quit: ");

//         while(i < amtOfNumbersStored && scanf("%d",&pRandomNumber[i]) == 1)
//         {

//             printf("Enter a number or quit: ");

//             i++;
//         }
    

//     printf("\nYou entered the following numbers\n");

//     for(int j = 0; j < i; j++)
//     {

//         printf("%d\n",pRandomNumber[j]);


//     }

//     }

//     free(pRandomNumber);

//     return 0;
// }

/////////////////////////////////////////////////////////////////////


struct product{

    float price;
    char productName[30];


};

int main()
{

int numberOfProducts;

int i,j;

printf("Enter the number of Products to Store:");

scanf("%d",&numberOfProducts);


struct product *pProducts;

pProducts = (struct product*) malloc(numberOfProducts * sizeof(struct product*));


for(i = 0; i < numberOfProducts; i++)
{

    printf("Enter the name of the product:");

    scanf("%s",&(pProducts+i)->productName);

    printf("Enter the price of the product:");

    scanf("%f",&(pProducts+i)->price);
    


}

printf("Products stored\n");

for(j = 0; j < numberOfProducts; j++)
{

    printf("%s\t%.2f\n",(pProducts+j)->productName,(pProducts+j)->price);


}

free(pProducts);


return 0;







}