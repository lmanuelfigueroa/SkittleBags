//
// Created by Moreno Figueroa, Luis on 5/2/19.
//

#ifndef SKITTLESPROJECT_BAG_H
#define SKITTLESPROJECT_BAG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef enum skittlesColor{
    RED,
    PURPLE,
    YELLOW,
    GREEN,
    ORANGE,
    BLUE,
}COLOR;


typedef struct {
    int red;
    int blue;
    int purple;
    int yellow;
    int green;
    int orange;


}SKITTLE_BAG;


SKITTLE_BAG *createBag();
bool foundDuplicate(SKITTLE_BAG *currentBag, SKITTLE_BAG array[]);



#endif //SKITTLESPROJECT_BAG_H
