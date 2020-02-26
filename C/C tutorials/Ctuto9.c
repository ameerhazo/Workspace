#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct product{

    float price;
    char productName[30];

    struct product *next;
};

struct product *pFirstNode;
struct product *pLastNode;

void createNewList()
{

struct product *pNewStruct = (struct product*) malloc (sizeof(struct product));

pNewStruct->next = NULL;

printf("Enter product name: ");

scanf("%s",&(pNewStruct)->productName);

printf("Enter product price: ");

scanf("%f",&(pNewStruct)->price);

pFirstNode = pLastNode = pNewStruct;// all pointers points to the first data in list.

}

void inputData()
{

if(pFirstNode == NULL) //checks if there is a list already created. If pFirstNode is NULL, then a list has not been created needs to be created first
{

    createNewList();

}

struct product *pNewStruct = (struct product*) malloc (sizeof(struct product));

printf("Enter product name: ");

scanf("%s",&(pNewStruct)->productName);

printf("Enter product price: ");

scanf("%f",&(pNewStruct)->price);


if(pFirstNode == pLastNode) //means that the first data in the list is already created and we're now dealing with the 2nd 
{

    pFirstNode->next = pNewStruct;

    pLastNode = pNewStruct;

    pNewStruct->next = NULL;

}else
{

    pLastNode->next = pNewStruct;

    pNewStruct->next = NULL;

    pLastNode = pNewStruct;

}
}

void outputData()
{
    
struct product *pProducts = pFirstNode;

printf("Products Entered\n\n");

while(pProducts != NULL)
{

printf("%s costs %.2f\n\n",pProducts->productName,pProducts->price);

pProducts = pProducts->next;

}

}

struct product *pProductBeforeProductToDelete = NULL;

struct product* searchForProduct(char * productName)// Ctuto10
{

struct  product *pProductIterator = pFirstNode;

while(pProductIterator != NULL)
{

int areTheyEqual = strncmp(pProductIterator->productName,productName,30); // if strings are equal than = 0

if(!areTheyEqual) // if areTheyEqual is non zero then the statement is true
{
    printf("%s was found and it costs %.2f\n\n",pProductIterator->productName,pProductIterator->price);

    return pProductIterator;
}

pProductBeforeProductToDelete = pProductIterator;

// if the product of the current pointer is not the sought after product, then point to the next product in the list
pProductIterator = pProductIterator->next;

}

// if the sought after product is not found in the linked list
printf("%s wasnt found\n\n", productName);


return NULL;


}

void removeProduct(char *productName)
{

struct product *pProductToDelete = NULL;

pProductToDelete = searchForProduct(productName);

if(pProductToDelete != NULL)
{

    printf("%s Was Deleted\n\n",productName);

   if(pProductToDelete == pFirstNode)
   {

       pFirstNode = pProductToDelete->next; //the data next to the deleted data in the list is set to be the first node
    }
    else
    {

        pProductBeforeProductToDelete->next = pProductToDelete->next;


    }

        free(pProductToDelete);
}
else
{
    printf("%s is not found",productName);
}





}

int main()
{


inputData();
inputData();

outputData();

removeProduct("Tomato");

outputData();

return 0;
}