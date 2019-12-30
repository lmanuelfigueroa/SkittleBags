#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "Bag.h"

#define INITIAL_ARRAY_CAPACITY 10

int main() {

    SKITTLE_BAG *newBag;
    printf("Creating Bags");

    SKITTLE_BAG *arraySkittles = (SKITTLE_BAG *) malloc(sizeof(SKITTLE_BAG));
    arraySkittles[INITIAL_ARRAY_CAPACITY];
    int count = 0;
    newBag = createBag();

    if (count < 1) {
        arraySkittles[count] = *newBag;
        newBag = createBag();
        count++;
    } else {
        while (!foundDuplicate(newBag, arraySkittles)) {

            arraySkittles[count] = *newBag;
            newBag = createBag();
            count++;
        }
    }
    printf("Complete\n");
    return 0;
}