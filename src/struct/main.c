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

int main(void)
{
    /* struct point definition */
    struct point pt1 = { 0, 0};
    struct point pt2 = { 1, 1};
    struct rectangle rect = { pt1, pt2 };

    double run = pt2.x - pt1.x;
    double rise = pt2.y - pt1.y;
    double distance = sqrt(pow(run,2.0) + pow(rise,2.0));

    printf("Rectangle defined as pt1 = { %d, %d } and pt2 = { %d, %d }\n",
            rect.pt1.x, rect.pt1.y, rect.pt2.x, rect.pt2.y);
    printf("Distance between points = %1.10e\n", distance);

    return(0);
}
