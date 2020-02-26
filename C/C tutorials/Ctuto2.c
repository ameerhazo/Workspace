#include <stdio.h>


void main() {

    // printf("\n");

    
    

    // int i = 1;

    // for (i;i<=40;i++){

    // if((i % 2) == 0) continue;

    
    //     printf("%d\n",i);
    
    // }

    char *myName [] = {"Ameer","Haziq","Bin","Osman"};

    int a = sizeof(myName);

    

    printf("%d\n",a);

    

    for(int i = 0; i < sizeof(myName); i++)
    {

        printf("%s ",myName[i]);
    }
    
    

}