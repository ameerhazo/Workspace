#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// int main(void)
// {

// FILE *pFile;

// char * buffer;

// size_t dataInFile;

// long fileSize;

// pFile = fopen("names.bin","rb+");

// if(pFile == NULL)
// {

//     perror("Error occured: ");
//     printf("Error Code: %d\n",errno);

//     printf("File Being Created\n\n");

//     pFile = fopen("names.bin","w+b");

//     if(pFile == NULL)
//     {
//         perror("Error occured: ");
//         printf("Error Code: %d\n",errno);
//         exit(1);

//     }
// }

// char name[] = "Derek Banas";

// fwrite(name,sizeof(name[0]),sizeof(name)/sizeof(name[0]),pFile);

// fseek(pFile,0,SEEK_END);
// fileSize = ftell(pFile);

// rewind(pFile);

// buffer = (char*) malloc(sizeof(char)*fileSize);

// if(buffer == NULL)
// {

//     perror("Error occured: ");
//     printf("Error Code: %d\n",errno);
//     exit(2);
// }

// dataInFile = fread(buffer,1,fileSize,pFile);


// if(dataInFile != fileSize)
// {
//     perror("Error occured: ");
//     printf("Error Code: %d\n",errno);
//     exit(3);

// }

// printf("%s\n",buffer);

// printf("\n");

// fclose(pFile);

// free(buffer);

// if(fclose(pFile) != 0)
// {
//  perror("Error occured: ");
//     printf("Error Code: %d\n",errno);
//     exit(4);
// }   

// return 0;

    
// }

////////////////////////////////////////////////////////////////////
int main(void){

FILE *pFile;

pFile = fopen("randomnums.bin","rb+");

if(pFile == NULL)
{

 perror("Error occured: ");
 printf("Error code: %d\n", errno);

printf("File being created\n\n");

pFile = fopen("randomnums.bin","wb+");

if(pFile == NULL)
{

    perror("Error occured: ");
    printf("Error code: %d\n", errno);
    exit(1);
}

}

int randomNumbers[20];

for(int i = 0; i < sizeof(randomNumbers); i++)
{

    randomNumbers[i] = rand() % 100;

    printf("Number %d is %d\n",i,randomNumbers[i]);


}

fwrite(randomNumbers,sizeof(int), 20,pFile);

long randomIndexNumber;
int numberatIndex;

printf("Which random number do you want? ");

scanf("%ld",&randomIndexNumber);

fseek(pFile,randomIndexNumber * sizeof(int),SEEK_SET);

fread(&numberatIndex,sizeof(int),1,pFile);

printf("The Random Number at Index %d is %d\n",randomIndexNumber,numberatIndex);


fclose(pFile);

return 0;
}