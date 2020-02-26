#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct product{

    float price;
    char productName[30];


    struct product *next;

};

struct product *pFirstNode = NULL;
struct product *pLastNode = NULL;

void createNewList()
{

    struct product *pNewStruct;

    pNewStruct = (struct product*) malloc(sizeof(struct product));

    pNewStruct->next = NULL;

    printf("Enter product name : ");

    scanf("%s",&(pNewStruct)->productName);

    printf("Enter product price :");

    scanf("%f",&(pNewStruct)->price);

    pFirstNode = pNewStruct;

    pLastNode = pNewStruct;

    

}

void inputData()
{

    if(pFirstNode == NULL)
    {
        createNewList();
    }
    else
    {
    
    struct product *pNewStruct = (struct product *)malloc(sizeof(struct product));

    printf("Enter product name: ");

    scanf("%s",&(pNewStruct)->productName);

    printf("Enter product price: ");

    scanf("%f",&(pNewStruct)->price);
    
    if(pFirstNode == pLastNode)
    {

        pFirstNode->next = pNewStruct;

        pLastNode = pNewStruct;

        pNewStruct->next = NULL;

    }
    else
    {
        pLastNode->next = pNewStruct;

        pNewStruct->next = NULL;
        
        pLastNode = pNewStruct;
    }
    }

    

}

void outputData()
{

    struct product *pProducts = pFirstNode;

    printf("Products entered :");


    while(pProducts != NULL)
    {

        printf("%s costs %.2f\n\n",pProducts->productName,pProducts->price);

        pProducts = pProducts->next;
        

    }
}

struct product *pProductBeforeProductToDelete = NULL;

struct product* searchForProduct(char * productName)
{

    struct product *pProductIterator = pFirstNode;

    while (pProductIterator != NULL)
    {
        int areTheyEqual = strncmp(pProductIterator->productName,productName,30);

        if(!areTheyEqual)
        {
            printf("%s was found and it costs %.2f\n\n",pProductIterator->productName,pProductIterator->price);

            return pProductIterator;
        }

        pProductBeforeProductToDelete = pProductIterator;

        pProductIterator = pProductIterator->next;     
        
    }

    printf("%s wasnt found\n\n");

    return NULL;
    
}

void removeProduct(char *productName)
{

    struct product *pProductToDelete = NULL;
    
    pProductToDelete = searchForProduct(productName);

    if(pProductToDelete != NULL)
    {

    printf("%s was deleted\n\n",productName);

        if (pProductToDelete == pFirstNode)
        {

            pFirstNode = pProductToDelete->next;

        }
        else {

            pProductBeforeProductToDelete->next = pProductToDelete->next;

        }

        free(pProductToDelete);
    
    }
    else
    {
        printf("%s was not found",productName);
    }
    


}




int main()
{

    inputData();
    inputData();
    inputData();

    outputData();

    removeProduct("Tomato");
    
    outputData();


    return 0;
}