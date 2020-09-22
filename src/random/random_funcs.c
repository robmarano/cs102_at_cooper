#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* for isdigit() */
#include <time.h> /* for time() to initialize srand() random num generator */

int random_number(int min_num, int max_num) {
    int result = 0, low_num = 0, hi_num = 0;

    if (min_num < max_num) {
        low_num = min_num;
        hi_num = max_num + 1; /* include max_num in output */
    } else {
        low_num = max_num + 1;  /* include max_num in output */
        hi_num = min_num;
    }
    result = ( rand() % (hi_num - low_num) ) + low_num;
    return(result);
}

