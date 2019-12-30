//
// Created by Tejas Sachdeva, Moreno Figueroa, Luis on 5/2/19.
//

#include "Bag.h"
#include <math.h>
#include <time.h>
#define MAXCAPACITY 60

SKITTLE_BAG *createBag(){

SKITTLE_BAG *newBag=(SKITTLE_BAG*)malloc(sizeof(SKITTLE_BAG));

int maxCapacity=MAXCAPACITY;
int randomSkittleNumberBlue,  randomSkittleNumberRed,  randomSkittleNumberGreen,  randomSkittleNumberPurple,
     randomSkittleNumberYellow,  randomSkittleNumberOrange;

    //randomSkittleNumberBlue=rand()%(maxCapacity +1-0)+(0);
    randomSkittleNumberBlue=rand()%MAXCAPACITY;
    newBag->blue=randomSkittleNumberBlue;
    maxCapacity-= randomSkittleNumberBlue;

    randomSkittleNumberRed=rand()%maxCapacity;
    //randomSkittleNumberRed=rand()%(maxCapacity +1-0)+(0);
    newBag->red=randomSkittleNumberRed;
    maxCapacity-= randomSkittleNumberRed;

    randomSkittleNumberGreen=rand()%maxCapacity;
    //randomSkittleNumberGreen=rand()%(maxCapacity +1-0)+(0);
    newBag->green=randomSkittleNumberGreen;
    maxCapacity-=randomSkittleNumberGreen;

    randomSkittleNumberPurple=rand()%maxCapacity;
    //randomSkittleNumberPurple=rand()%(maxCapacity +1-0)+(0);
    newBag->purple=randomSkittleNumberPurple;
    maxCapacity-=randomSkittleNumberPurple;

    randomSkittleNumberYellow=rand()%maxCapacity;
   // randomSkittleNumberYellow=rand()%(maxCapacity +1-0)+(0);
    newBag->yellow=randomSkittleNumberYellow;
//    maxCapacity=MAXCAPACITY - randomSkittleNumberBlue - randomSkittleNumberRed - randomSkittleNumberBlue - randomSkittleNumberRed - randomSkittleNumberGreen - randomSkittleNumberYellow;


    newBag->orange=maxCapacity;




    return newBag;
}
bool foundDuplicate(SKITTLE_BAG *currentBag, SKITTLE_BAG array[]){

    return false;
}

