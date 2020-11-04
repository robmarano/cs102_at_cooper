#include <stdio.h>
#include <math.h>
#include "cartesian.h"

double getDistanceFromRect(struct rectangle rect)
{
    struct point pt1 = rect.pt1;
    struct point pt2 = rect.pt2;
    double distance = getDistanceFromPoints(pt1, pt2);
    return(distance);
}

double getDistanceFromPoints(struct point pt1, struct point pt2)
{
    double run = pt2.x - pt1.x;
    double rise = pt2.y - pt1.y;
    double distance = sqrt(pow(run,2.0) + pow(rise,2.0));
    return(distance);
}

