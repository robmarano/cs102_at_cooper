#include <stdio.h>

int main() {
    int x;

    printf("On this computer...\n");

    x = sizeof(char);
    printf("\tchar type has size of %d byte(s)\n", x);
    
    x = sizeof(short int);
    printf("\tshort int type has size of %d byte(s)\n", x);
    
    x = sizeof(int);
    printf("\tint type has size of %d byte(s)\n", x);

    x = sizeof(long int);
    printf("\tlong int type has size of %d byte(s)\n", x);

    x = sizeof(float);
    printf("\tfloat type has size of %d byte(s)\n", x);

    x = sizeof(double);
    printf("\tdouble type has size of %d byte(s)\n", x);

    x = sizeof(long double);
    printf("\tlong double type has size of %d byte(s)\n", x);

    return(0);
}
