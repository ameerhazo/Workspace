#include <stdio.h>
#include <stdlib.h>

struct dogFavs {

    char *food;
    char *friend;

};


typedef struct {

    const char *name;
    const char *breed;
    int avgHeightCm;
    int avgWeightLbs;

    struct dogFavs FavouriteThings;

}dog;

getDogInfo( dog theDog)
{

printf("\n");

printf("Name: %s\n\n", theDog.name);
printf("Breed: %s\n\n", theDog.breed);
printf("Height: %d\n\n", theDog.avgHeightCm);
printf("Weight: %d\n\n", theDog.avgWeightLbs);


}

getDogFavs(dog theDog){

    printf("\n");

    printf("%s's favourite food is %s and his best friend is %s\n\n",theDog.name,theDog.FavouriteThings.food,theDog.FavouriteThings.friend);

}

setDogWeight(dog *theDog, int newWeight)
{

    (*theDog).avgWeightLbs = newWeight;

    printf("The weight was changed to %d\n\n",theDog->avgWeightLbs);



}






void main(){


     dog cujo = {"Cujo","Saint Bernard",90,264,{"Tuna","Ameer"}};

    getDogInfo(cujo);

    getDogFavs(cujo);

    setDogWeight(&cujo,11);

    printf("The weight in main %d\n\n",cujo.avgWeightLbs);
    
    
    }