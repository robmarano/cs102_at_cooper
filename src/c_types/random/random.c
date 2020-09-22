#include <stdio.h>
#include <stdlib.h>

#define frand() ((double) rand() / (RAND_MAX+1.0))

int random_number(int min_num, int max_num);

int main() {
    /* srand(10); initializes the random number generator */

    printf("We will pick a random number between 0 and RAND_MAX (in stdlib.h) = %d\n", RAND_MAX);

    int min = 1, max = 10;
    /* int rand_num = random_number(min, max); */
    /* float rand_num = rand() % (max - min); */
    float rand_num = frand();

    printf("The computer chose %f\n", rand_num);

    return(0);
}

int random_number(int min_num, int max_num) {
    int result = 0, low_num = 0, hi_num = 0;

    if (min_num < max_num) {
        low_num = min_num;
        hi_num = max_num + 1; // include max_num in output
    } else {
        low_num = max_num + 1;  // include max_num in output
        hi_num = min_num;
    }
    result = ( rand() % (hi_num - low_num) ) + low_num;
    return(result);
}
