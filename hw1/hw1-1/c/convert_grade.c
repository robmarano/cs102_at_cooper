/*
 * convert_grades.c
 * Program 1
 * Application to assign a letter grade to a numeric test result.
 * INPUT
 *   single test score, integer between 0 and 100, inclusive
 * OUTPUT
 *   single letter grade, character between A and F, inclusive
 * ALGORITHM
 *   90-100 results in an 'A', 80-89 results in a 'B', 70-79 results in a 'C',
 *   60-69 results in a 'D', and anything less than 60 results in an 'F'.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>	/* defines char testing functions, e.g., isdigit(), islower(), isspace(), ... */
#include <limits.h>	/* defines ARG_MAX symbolic constant */

#define GRADE_INSTANCE 84	/* input to the program via symbolic constant */

#define MAXLINE ARG_MAX		/* on linux try $ getconf ARG_MAX */
#define NEW_LINE_CHAR '\n'
#define ZERO_CHAR '0'

int main(void) {
	unsigned int score = GRADE_INSTANCE; /* INPUT: take input from user, here at compile time */
	char grade = 'F';
	/* what happens if we simply declare but do not define this variable? */

	/* Assess the score and apply logic */
	if  (score >= 90) {
		grade = 'A';
	} else if ((score >= 80) && (score < 90)) {
		grade = 'B';
	} else if ((score >= 70) && (score < 80)) {
		grade = 'C';
	} else if ((score >= 60) && (score < 70)) {
		grade = 'D';
	} else if (score < 60) {
		grade = 'F';
	}

	/* OUTPUT: inform the user of the result */
	printf("The score of %d earns a grade of %c.\n", score, grade);

    /* exit mainline with success code, 0x00 */
    return(EXIT_SUCCESS); /* from stdlib.h; see https://cplusplus.com/reference/cstdlib/ */
}