#include <stdio.h>
#include <math.h>
#include "cartesian.h"

int main(int argc, char *argv[])
{
    /* struct point definition */
    struct point pt1 = { 0, 0};
    struct point pt2 = { 2, 1};
    struct rectangle rect = { pt1, pt2 };

    struct rectangle *pRect;


    double distance = getDistanceFromRect(rect);

    printf("Rectangle defined as pt1 = { %d, %d } and pt2 = { %d, %d }\n",
            rect.pt1.x, rect.pt1.y, rect.pt2.x, rect.pt2.y);
    printf("Distance between points = %1.10e\n", distance);

    pRect = &rect;
    struct point pt3 = {4,4};
    pRect->pt2 = pt3;

    distance = getDistanceFromRect(*pRect);

    printf("Rectangle defined as pt1 = { %d, %d } and pt2 = { %d, %d }\n",
            pRect->pt1.x, pRect->pt1.y, pRect->pt2.x, pRect->pt2.y);
    printf("Distance between points = %1.10e\n", distance);

    int dilateFactor = 2;
    struct point pt4 = {1,1};
    printf("point 4 = {%d,%d}\n",pt4.x, pt4.y);
    dilatePoint(&pt4, dilateFactor);
    printf("point 4 = {%d,%d}\n",pt4.x, pt4.y);

    dilatePoint(&(rect.pt2), dilateFactor);
    distance = getDistanceFromRect(*pRect);
    printf("Rectangle defined as pt1 = { %d, %d } and pt2 = { %d, %d }\n",
            pRect->pt1.x, pRect->pt1.y, pRect->pt2.x, pRect->pt2.y);
    printf("Distance between points = %1.10f\n", distance);

    return(0);
}
