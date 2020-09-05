#include <stdio.h>
#include "radius2Area.h"

int main(void){

    double radius = 3.0;
    double area;

    area = radius2Area(radius);
    printf("Pi is approximated as %5.3f.\n",MY_PI);
    printf("The volume of the sphere is %8.4lf.\n.",area);

    return 0;

}