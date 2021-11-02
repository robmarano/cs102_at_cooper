/*
 * main.c
 *
 * This program will print out values of sin(x)
 * Written by: Rob Marano <robmarano@gmail.com>
 *
 */

#include "sinusoid.h"
#include "simpleCurses.h"

char grid[HEIGHT][WIDTH];

int main(void)
{
    float xInc = 0.1;

    printf("using calculateSineValues()\n");
    calculateSineValues();

    printf("Press ENTER key to Continue\n");
    getchar();

    printf("using sineValues(xInc) -- passing by value\n");
    sineValues(xInc);

    printf("Press ENTER key to Continue\n");
    getchar();

    printf("using simpleCurses\n");
    simpleCurses(xInc);

    return(SUCCESS);
}
