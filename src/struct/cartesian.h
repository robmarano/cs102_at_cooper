#ifndef CARTESIAN_H
#define CARTESIAN_H

#include <stdio.h>
#include <math.h>

/* struct point declaration */
struct point
{
    int x;
    int y;
};

/* struct rectangle declaration */
struct rectangle
{
    struct point pt1;
    struct point pt2;
};

double getDistanceFromRect(struct rectangle);
double getDistanceFromPoints(struct point pt1, struct point pt2);

#endif /* CARTESIAN_H */
