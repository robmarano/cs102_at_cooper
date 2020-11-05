#include <stdio.h>
#include "bottles.h"

int main(void)
{
    int numberOfBottles = 99;
    singSongFor(numberOfBottles);
    printf("%d empty bottles in the bin.\n", numberOfBottles);
    return(0);
}
