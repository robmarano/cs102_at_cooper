# CS 102 M &mdash; Fall 2022 Homeworks

# Assignment 1

## Due September 19, 2022 11:59 PM

## Instructions

Write each program assignment below in C then in Python3. In order to submit your individual assignment, you will simply create a text document and add the directory URL to the GitHub repository for your CS102M assignments. 

This is the GitHub Classroom link for this specific assignment: https://classroom.github.com/a/u1qoAR22

Complete the following programs for a total of 10 points for Assignment 1.


2. _(3 points in C; 3 points in Python3)_ Extend the program logic explained above by reading in a list of numeric score inputs. Read the input from the user via the terminal (use STDIN). Store the input values into an array. Then have the program print out the basic statistics of the series of values, i.e., mean (the average score), the median (the score that half the students are less than and the other half are better than), and the mode (the score the most students earned). The program must print the scores in sorted order. 

## Program 2

### In C
```c
/*
 * convert_grades.c
 * Program 2
 * 
 * Application to assign a letter grade to a numeric test result.
 * INPUT
 *   user enters at the terminal multiple test scores, integer between 0 and 100, inclusive
 *   store the input values into an array.
 * OUTPUT
 *   first print out the letter grade for each score in descending, sorted order.
 *   then, print out the mean, the median, and the mode.
 * ALGORITHM
 *   90-100 results in an 'A', 80-89 results in a 'B', 70-79 results in a 'C',
 *   60-69 results in a 'D', and anything less than 60 results in an 'F'.
 */

#include <stdio.h>
#include <stdlib.h>	/* defines atoi() which converts string to integer (human readable number) */
#include <ctype.h>	/* defines char testing functions, e.g., isdigit(), islower(), isspace(), ... */
#include <limits.h>	/* defines ARG_MAX symbolic constant */

#define MAXLINE 15			/* can use, ARG_MAX for length of input string; on linux try $ getconf ARG_MAX */
#define MAX_SCORES	96		/* max num of scores to enter; need to pre-alloc max num of scores */
#define NEW_LINE_CHAR '\n'
#define ZERO_CHAR '0'
#define NULL_CHAR '\0'

#define INPUT_NUM_VALUES "Enter number of scores you will enter"
#define WARNING_NON_NUMBER "Enter a number; start over."

int main(void) {
	int c;						/* the single character inputted each keystroke */
	int width_input = 0;		/* number of digits for the numeric value */
	int num_values = 0;			/* quantity of scores user will input */
	char input_line[MAXLINE];	/* max length of input line from CLI */

	/*
	 * gather and initially process data from user
	 */

	/* clear out the input_line, filling with NULL_CHARs */
	for (int j = 0; j < MAXLINE; j++) {
		input_line[j] = (char) NULL_CHAR;
	}

	/* ask user the number of values she'll enter next */
	printf("%s: ",INPUT_NUM_VALUES);
	while ( ((c = (char) getchar()) != EOF) && (c != NEW_LINE_CHAR) && (width_input < (MAXLINE - 1)) ) {
		if ( isdigit(c) ) {
			input_line[width_input] = c;
			width_input++;
		} else {
			printf("%s\n",WARNING_NON_NUMBER);
			width_input = 0;
		}
	}
	printf("\n");
	num_values = (int) atoi(input_line);
	printf("Enter %d scores next; one value per line\n", num_values);

	/* clear out the input_line, filling with NULL_CHARs */
	for (int j = 0; j < MAXLINE; j++) {
		input_line[j] = (char) NULL_CHAR;
	}

	/* loop through num_values to store scores in array */
	int scores[MAX_SCORES];	/* since we do not know num_values till run-time, */
							/* need to provide max indices for scores. */
							/* wait till C mem mgmt, aka, pointers */

	int cnt;	/* counter to keep track of num of scores inputted */
	for (cnt = 0; cnt < num_values; cnt++) {
		width_input = 0; /* reusing input_line */
		/* clear out the input_line, filling with NULL_CHARs */
		for (int j = 0; j < MAXLINE; j++) {
			input_line[j] = (char) NULL_CHAR;
		}
		while ( ((c = (char) getchar()) != EOF) && (c != NEW_LINE_CHAR) && (width_input < (MAXLINE - 1)) ) {
			if ( isdigit(c) ) {
				input_line[width_input] = c;
				width_input++;
			} else {
				printf("%s\n",WARNING_NON_NUMBER);
				cnt = -1;
				break;
			}
		}
		if (cnt >= 0)
			scores[cnt] = (int) atoi(input_line);
	}
	/* What happens if you type in non-numeric values when entering scores? */

	/* sort descending the score values in-place: what sort algo is this? work it out */
	for (int i = 0; i < num_values; ++i){
		for (int j = i + 1; j < num_values; ++j){
			if (scores[i] < scores[j]) { /* change < to >, and get ascending order */
				/* swap values */
				int a = scores[i];
				scores[i] = scores[j];
				scores[j] = a;
			}
		}
	}

	/*
	 * convert scores to grades
	 */
	char grades[MAX_SCORES];
	for (int i = 0; i < num_values; i++) {
		/* Assess the score and apply logic */
		int score = scores[i];
		if  ((score >= 90)) {
			grades[i] = 'A';
		} else if ((score >= 80) && (score < 90)) {
			grades[i] = 'B';
		} else if ((score >= 70) && (score < 80)) {
			grades[i] = 'C';
		} else if ((score >= 60) && (score < 70)) {
			grades[i] = 'D';
		} else if (score < 60) {
			grades[i] = 'F';
		}
	}

	/* calc mean */
	float mean = 0;
	for (int i = 0; i < num_values; i++) {
		mean += (float) scores[i];
	}
	mean /= num_values;

	/* calc median */
	/* First, simply sort the array. Then, check if the number of elements present in */
	/* the array is even or odd. If odd, then simply return the mid value of the array. */
	/* Else, the median is the average of the two middle values */
	float median;
	if ( num_values % 2 == 0) /* test if cnt is even */
		median = (scores[num_values/2-1] + scores[num_values/2]) / 2.0 ;
	else
		median = scores[num_values/2];

	/* calc mode */
	/*
	 * START
	 *   Step 1 → Take an integer set A of n values
	 *   Step 2 → Count the occurence of each integer value in A
	 *   Step 3 → Display the value with highest occurence
	 *   (the highest value too in case there are more than one modes)
	 * STOP
	 */
	char maxVal = 'F';
	int maxCnt = 0;
	int count = 0;

	for (int i = 0; i < num_values; ++i) {	/* note increment is pre, not post */
		count = 0;

		for (int j = 0; j < cnt; ++j) {		/* note increment is pre, not post */
			if (grades[j] == grades[i])
				++count;
		}

		if (count > maxCnt) {
			maxCnt = count;
			maxVal = grades[i];
		}
	}
	char mode;
	if (count > 1) {
		mode = maxVal;
	} else {
		mode = 'x';
	}

	/* OUTPUT: inform the user of the result */
	
	/* print out sorted scores */
	printf("Score and grade sorted in descending order:\n");
	for (int i = 0; i < cnt; i++) {
		printf("Score %d earns %c\n", scores[i], grades[i]);
	}
	printf("\n");
	printf("Stats summary for these %d scores:\n", num_values);
	printf("Mean  = %.2f\n", mean);
	printf("Median = %.2f\n", median);
	printf("Mode = %c\n", mode);

    /* exit mainline with success code, 0x00 */
    return(EXIT_SUCCESS); /* from stdlib.h; see https://cplusplus.com/reference/cstdlib/ */
}
```

Output:
```bash
$ git checkout homeworks-Fall_2022
$ cd hw1/hw1-2/c
$ make clean run
/bin/rm -f convert_grade.o convert_grade.exe convert_grade.log
gcc -Wall -Werror -ansi -std=c99 -c -o convert_grade.o convert_grade.c
gcc -o convert_grade.exe convert_grade.o
./convert_grade.exe
The score of 84 earns a grade of B.
```
