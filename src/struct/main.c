/*
 * main.c
 *
 * This program introduces struct and pointers.
 * Written by: Rob Marano <robmarano@gmail.com>
 *
 */

#include "main.h"
#include "struct.h"

#define DEBUG 1

struct point **COORDS;

int main(void)
{
    int numOfCoords = 0;

    /* ask user for # of coords to input */
    printf("Enter the number of coordinates: ");
    scanf("%d", &numOfCoords);

    *COORDS = malloc(numOfCoords * sizeof(struct point *));

    /* Loop through # and get coord pairs */
    printf("\nEnter your coordinate in the form x,y\n");
    double x,y;
    for (int i=0; i<numOfCoords; i++) {
        struct point aPoint;
        scanf("%lf,%lf",&x,&y);
        aPoint.x = x;
        aPoint.y = y;
        #ifdef DEBUG
        printf("(%lf,%lf)\n",aPoint.x, aPoint.y);
        #endif
/*       COORDS[i] = &aPoint; */
    }
    #ifdef DEBUG
    printf("\n");
    #endif

    return(SUCCESS);
}
