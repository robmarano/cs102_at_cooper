#include "bottles.h"

/* Reference: https://learning.oreilly.com/library/view/objective-c-programming-the/9780133491920/ch05s06.html */
void singSongFor(int numberOfBottles)
{
    if (numberOfBottles == 0)
    {
        printf("There are no more bottles of beer on the wall!\n\n");
    } else {
        printf("%d bottles of beer on the wall. %d bottles of beer.\n",
                numberOfBottles, numberOfBottles);
        int oneFewer = numberOfBottles - 1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n\n",
                oneFewer);
        singSongFor(oneFewer);

    }
}
