#include <stdio.h>
#include <math.h>
#include "cartesian.h"

int main(void)
{
    /* struct point definition */
    struct point pt1 = { 0, 0};
    struct point pt2 = { 1, 1};
    struct rectangle rect = { pt1, pt2 };

    double distance = getDistanceFromRect(rect);

    printf("Rectangle defined as pt1 = { %d, %d } and pt2 = { %d, %d }\n",
            rect.pt1.x, rect.pt1.y, rect.pt2.x, rect.pt2.y);
    printf("Distance between points = %1.10e\n", distance);

    return(0);
}
