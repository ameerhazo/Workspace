#include <stdio.h>
#include <string.h>

#define MYNAME "Ameer Haziq"

int globVar = 100;
main() 
{
   
   int randomNumber = 1;

    printf("1 + 2 : %d\n\n",randomNumber+=2);

    int exNum = 1;

    printf("++%d : %d\n\n",exNum,++exNum);

    exNum = 1;

    printf("%d++ : %d\n\n",exNum, exNum++);

    int numberEx = 12;

    int numberEx2 = 14;

    printf("numberEx / numberEx2 : %f\n\n",(float) numberEx/numberEx2);
}

