# CS 102 M &mdash; Fall 2022 Homeworks

# Assignment 1

## Due September 19, 2022 11:59 PM

## Instructions

Write each program assignment below in C then in Python3. In order to submit your individual assignment, you will simply create a text document and add the directory URL to the GitHub repository for your CS102M assignments. 

This is the GitHub Classroom link for this specific assignment: https://classroom.github.com/a/u1qoAR22

Complete the following programs for a total of 10 points for Assignment 1.

1. _(2 points in C; 2 points in Python3)_ Write a program to assign a letter grade to a numeric test result. The program's input (0-100) is a single test score, and its output is a letter grade (A through F). Assume the normal distribution of grades: 90-100 results in an 'A', 80-89 results in a 'B', 70-79 results in a 'C', 60-69 results in a 'D', and anything less than 60 results in an 'F'. For this assignment, your input data will be coded into the actual program. The execution of the code will asses a single numeric score input.

## Program 1

### In C
```c
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
	if  ((score >= 90) && (score <= 100)) {
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
```

Output:
```bash
$ git checkout homeworks-Fall_2022
$ cd hw1/hw1-1/c
$ make clean run
/bin/rm -f convert_grade.o convert_grade.exe convert_grade.log
gcc -Wall -Werror -ansi -std=c99 -c -o convert_grade.o convert_grade.c
gcc -o convert_grade.exe convert_grade.o
./convert_grade.exe
The score of 84 earns a grade of B.
```