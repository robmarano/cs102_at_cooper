/*
 * simpleCurses.h
 *
 * Header file for graphing using simple curses.
 * Written by: Rob Marano <robmarano@gmail.com>
 */

#ifndef SIMPLECURSES_H
#define SIMPLECURSES_H

#include "sinusoid.h"

#define WIDTH 80
#define HEIGHT 80
#define X WIDTH/2
#define Y HEIGHT/2
#define XMIN -(WIDTH-X)
#define XMAX WIDTH-X-1
#define YMIN -(HEIGHT-Y)+1
#define YMAX HEIGHT-Y
#define XSCALER 20
#define YSCALER 20

extern char grid[WIDTH][HEIGHT];

/* plot() */
int plot(int x, int y);

/* initGrid() */
void initGrid(void);

/* showGrid() */
void showGrid(void);

/* simpleCurses() */
void simpleCurses(float xInc);

#endif /* SIMPLECURSES_H */
