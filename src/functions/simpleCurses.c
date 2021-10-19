/*
 * simpleCurses.c
 *
 * C file for graphing using simple curses.
 * Written by: Rob Marano <robmarano@gmail.com>
 */

#include "sinusoid.h"
#include "simpleCurses.h"

/* simpleCurses() */
/*
 * calculate and draw the sine using characters in a terminal
 */
void simpleCurses(float xInc) {

    initGrid();

    float x, y;
    for(x=-M_PI; x<=M_PI; x+=xInc) {
        y = sin(x);
        plot(rintf(x*XSCALER), rintf(y*YSCALER));
    }

    showGrid();
}

/* plot(x,y) */
/*
 * set pixel at coordinates
 */
int plot(int x, int y) {
    if (x>XMAX || x<XMIN || y>YMAX || y<YMIN) {
        return(-1);
    }
    grid[X+x][Y-y] = '*';        /* look in simpleCurses.h for X, Y definitions */
    return(1);
}

/* initGrid() */
/*
 * initialize curses-based pixel grid
 */
void initGrid(void) {
    int x,y;

    /* clear the spaces */
    for(y=0; y<HEIGHT; y++) {
        for(x=0; x<WIDTH; x++) {
            grid[x][y] = ' ';
        }
    }
    
    /* draw the axes */
    for(y=0; y<HEIGHT; y++) {
        grid[y][X] = '|';
    }
    for(x=0; x<WIDTH; x++) {
        grid[Y][x] = '-';
    }
    /* draw origin (0,0) */
    grid[X][Y] = '+';
}

/* showGrid() */
/*
 * display grid
 */
void showGrid(void) {
    int x,y;

    for(y=0; y<HEIGHT; y++) {
        for(x=0; x<WIDTH; x++) {
            putchar(grid[y][x]);
        }
        printf("\n");
    }
}
