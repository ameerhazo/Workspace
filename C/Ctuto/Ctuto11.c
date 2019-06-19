#include <stdio.h>
#include <stdlib.h>

int main()
{

//   int randomNumber;

   char buffer[1000];

    FILE *pFile;

    pFile = fopen("randomwords.txt", "r+");

    if(!pFile)
    {

        printf("Error: Couldnt Write To File");

        return 1;
 
    }

    // for(int i = 0; i < 10; i++)
    // {


    //     randomNumber = rand() % 100;

    //     fprintf(pFile, "%d\n", randomNumber);


    // }

    fputs("Messing with Strings", pFile);

    fseek(pFile,12,SEEK_SET);

    fputs(" Files ", pFile);

    fseek(pFile, 0, SEEK_SET);




    // while(fgets(buffer,1000,pFile) != NULL){


    //     printf("%s",buffer);


    // }

    // while((fscanf(pFile,"%s",buffer) == 1))
    // {

    //     puts(buffer);

    // }

    printf("Success Reading From File\n");


    while(fgets(buffer,1000,pFile) != NULL)
    {

        printf("%s",buffer);

    }
    if(fclose(pFile) != 0)
    {

        printf("Error: File Not Closed\n");


    }

    return 0;
}