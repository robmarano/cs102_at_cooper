#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* for isdigit() */
#include <time.h> /* for time() to initialize srand() random num generator */

#define frand() ((double) rand() / (RAND_MAX+1.0))

int random_number(int min_num, int max_num);

int main() {
    srand(time(NULL)); /* initializes the random number generator */

    printf("On this computer, a random number can be chosen between 0 and RAND_MAX (as defined in stdlib.h) = %d\n", RAND_MAX);

    int min = 1; /* Randomly role one dice */
    int max = 6; /* Randomly role one dice */
    int rand_num = random_number(min, max);
    /* float rand_num = rand() % (max - min); */
    /* float rand_num = frand(); */

    printf("Computer randomly rolling a die. What's your guess? ");
    int cc = 0; /* this number represents the actual number translated from its ascii code */
    int c; /* the character the user inputs */
    int done = 0;
    while ( !done ) {
        c = getchar(); /* see man getchar; gets char from keyboard from stdin stream */
        fflush(stdin); /* fpurge(stdin); or use fflush(stdin); see man fflush */
        if (isdigit(c)) {
            cc = c - 48; /* according to ascii, transpose by 48 to get number from letter */
            if ( (cc > 0) && (cc < 7) ) {
                printf("You entered %d.\n", cc);
                done = 1;
            } else {
                printf("Please enter a value between 1 and 6. ");
                done = 0;
            }
        } else {
            printf("Please enter a number between 1 and 6. ");
            done = 0;
        }
    }

    printf("The computer chose %d.\n", rand_num);

    if (rand_num == cc) {
        printf("HOORAY! You win! You guessed the computer's value %d\n", rand_num);
    } else {
        printf("Sorry. You lose. You did guess the computer's value %d\n", rand_num);
    }

    printf("Thank you. Goodbye!\n");

    return(0);
}

