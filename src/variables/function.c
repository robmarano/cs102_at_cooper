#include <stdio.h>
#include "function.h"

void myFunction(int cnt) {
	count = cnt;
    printf("\t myFunction:: Value of count = %d before increment\n",count);
    count++;
    printf("\t myFunction:: Value of count = %d after increment\n",count);
}
