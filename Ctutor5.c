#include <stdio.h>
#include <stdlib.h>

struct dogsFavs
{
    char* food;
    char* friend;
};

typedef struct dog
{

    const char *name;
    const char *breed;
    int avgHeightCm;
    int avgWeightLbs;

    struct dogsFavs favoriteThings;// struct inside of a struct

}dog; // for struct dont forget to put ; at the end 



void getDogInfo(dog theDog)
{
    printf("\n");

    printf("Name: %s\n\n",theDog.name);
    printf("Breed: %s\n\n",theDog.breed);
    printf("Height: %d\n\n",theDog.avgHeightCm);
    printf("Weight: %d\n\n",theDog.avgWeightLbs);

}

// void getMemoryLocations(struct dog theDog)
// {
//     printf("Name: %d\n\n",theDog.name);
//     printf("Breed: %d\n\n",theDog.breed);
//     printf("Height: %d\n\n",&theDog.avgHeightCm);
//     printf("Weight: %d\n\n",&theDog.avgWeightLbs);

// }

void getDogsFavs(dog theDog)
{
    printf("\n");

    printf("%s loves %s and his friend is %s\n\n",theDog.name,theDog.favoriteThings.food,theDog.favoriteThings.friend);
    

}
void setDogWeightPtr(dog *theDog, int newWeight)
{

    (*theDog).avgWeightLbs = newWeight;

    printf("The weight was changed to %d\n\n",theDog->avgWeightLbs);

}
void main()
{

//struct dog cujo = {"Cujo","Saint Bernard",90,264}; without typedef
dog benji = {"Benji","Silky Terrier",25,9,{"Meat","Joe Camp"}};

getDogsFavs(benji);

setDogWeightPtr(&benji,30);

printf("The weight in Main() %d\n\n",benji.avgWeightLbs);




}