/*
 * sinusoid.c
 *
 * C file for sinusoidal processing
 * Written by: Rob Marano <robmarano@gmail.com>
 */

#include "sinusoid.h"

/*
 * M_PI is a preprocessor macro from <math.h>
 * https://www.gnu.org/software/libc/manual/html_node/Mathematical-Constants.html
 *
 * rintf() is a function from <math.h>
 * https://www.gnu.org/software/libc/manual/html_node/Rounding-Functions.html
 */

/* calculateSineValues() */
void calculateSineValues(void) {
    float x, y;

    for(x=-M_PI; x<= M_PI; x+=X_INCREMENT) {
        y = sin(x);
        printf("(%.2f, %.2f)\n",x,y);
    }
}

/* sineValues() */
void sineValues(float xInc) {
    float x, y;

    for(x=-M_PI; x<= M_PI; x+=xInc) {
        y = sin(x);
        printf("(%.2f, %.2f)\n",x,y);
    }
}
