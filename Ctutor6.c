#include <stdio.h>
#include <stdlib.h>


typedef struct product{

    const char *name;
    float price;

    struct product *next;

}product;

void printLinkedList(product *pProduct)
{
    while(pProduct != NULL)
    {
        printf("A %s costs %.2f\n\n",(*pProduct).name,(*pProduct).price);

        pProduct = (*pProduct).next;
    }
}

void main()
{

product tomato = {"Tomato",.51,NULL};
product potato = {"Potato",1.21,NULL};
product lemon = {"Lemon",1.69,NULL};
product milk = {"Milk",3.09,NULL};
product turkey = {"Turkey",1.86,NULL};

tomato.next = &potato;
potato.next = &lemon;
lemon.next = &milk;
milk.next = &turkey;

product apple = {"Apple",1.58,NULL};

lemon.next = &apple;
apple.next = &milk;

printLinkedList(&milk);






//     typedef union // a union can only hold one value at a time 
//     {
//         short individual;
//         float pound;
//         float ounce; 
//     }amount;

//     amount OrangeAmt = {.ounce = 16};

//     OrangeAmt.individual = 4;

//     printf("Orange juice amount =%.2f : Size %d\n\n",OrangeAmt.ounce,
//     sizeof(OrangeAmt.ounce));

//     printf("Number of oranges  =%.2f : Size %d\n\n",OrangeAmt.individual,
//     sizeof(OrangeAmt.individual));

//     OrangeAmt.pound = 1.5;

//     printf("Orange juice amount  =%f : Size %d\n\n",OrangeAmt.pound,
//     sizeof(OrangeAmt.pound));

// typedef struct{

//     char *brand;
//     amount theAmount;

// }orangeProduct;

// orangeProduct productOrdered = {"Chiquita",.theAmount.ounce = 16};

// printf("You bought %.2f ounces of %s oranges\n\n",productOrdered.theAmount.ounce,
// productOrdered.brand);




// //enumerated type

// typedef enum{INDIV, OUNCE, POUND}quantity;

// quantity quantityType = INDIV;

// OrangeAmt.individual = 4;

// if(quantityType == INDIV)
// {

//     printf("You bought %d oranges\n\n",OrangeAmt.individual);
// }
// else if(quantityType == OUNCE)
// {
//     printf("You bought %.2f ounces of oranges\n\n",OrangeAmt.ounce);
// }
// else 
// {

// printf("You bought %.2f ounces of oranges\n\n",OrangeAmt.pound);

// }


}

