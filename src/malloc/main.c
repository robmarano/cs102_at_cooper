#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* struct point declaration */
typedef struct POINT
{
    int x;
    int y;
} point;

point *p1;
point *p2;

/* struct rectangle declaration */
typedef struct RECTANGLE
{
    point pt1;
    point pt2;
} rectangle;

int main(void)
{
    p1 = (point *) malloc(sizeof(point));
    p1->x = 100;
    p1->y = 200;
    p2 = (point *) malloc(sizeof(point));
    p2->x = 10;
    p2->y = 20;

    printf("p1 address = %p\n",p1);
    printf("size of p1 is %lu bytes\n",sizeof(p1));
    printf("p1.x address = %p\n",(void *)&p1->x);
    printf("size of p1->x is %lu bytes\n",sizeof(p1->x));
    printf("p1.y address = %p\n",(void *)&p1->y);
    printf("size of p1->y is %lu bytes\n",sizeof(p1->y));
    printf("p1 = {%d,%d} , p2 = {%d,%d}\n",p1->x, p1->y, p2->x, p2->y);

    return(0);
}
