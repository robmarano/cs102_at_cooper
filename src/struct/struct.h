/*
 * struct.h
 *
 * Header file for structs
 * Written by: Rob Marano <robmarano@gmail.com>
 */

#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>

struct point {
    double x;
    double y;
};

void loopCoords(int length, struct point *);

#endif /* STRUCT_H */
