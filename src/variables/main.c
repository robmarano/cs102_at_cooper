#include <stdio.h>
#include "function.h"

extern int count; /* declare variable count as an external one from function.h */

int main() {
    printf("main():: The value of count before myFunction() call = %d\n", count);

    myFunction(10);

    count--;
    printf("main():: The value of count after myFunction() call = %d\n", count);
    return(0);
}
