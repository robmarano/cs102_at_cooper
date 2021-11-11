/*
 * struct.c
 *
 * C Definition file for structs
 * Written by: Rob Marano <robmarano@gmail.com>
 */

#include "struct.h"

void loopCoords(int length, struct point *coords) {
    for (int i=0; i<length; i++) {
        struct point aPoint = coords[i];
        printf("(%lf,%lf)\n",aPoint.x, aPoint.y);
    }
    printf("\n");
}
