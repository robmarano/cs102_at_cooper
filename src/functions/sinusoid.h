/*
 * sinusoid.h
 *
 * Header file for sinusoidal processing
 * Written by: Rob Marano <robmarano@gmail.com>
 */

#ifndef SINUSOID_H
#define SINUSOID_H

#include <stdio.h>
#include <math.h>

#define SUCCESS 0
#define X_INCREMENT 1.0

/* calculateSineValues() */
void calculateSineValues(void);

/* sineValues() */
void sineValues(float xInc);

#endif /* SINUSOID_H */
