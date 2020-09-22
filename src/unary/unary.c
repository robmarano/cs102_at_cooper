#include <stdio.h>

int main() {
    int x;

    /* working with input from the keyboard */
    printf("Enter a letter: ");
    char c = getchar();
    printf("You entered %c\n", c);

    /* conditional using if-else */
    if ( c == 'D' ) {
        printf("You win because you entered 'D'!\n");
    } else {
        printf("Sorry. You did not pick the winning letter.\n");
    }

    /* working with booleans */

    int amOk, amBad; /* variable declaration */

    amOk = 0; /* variable definition */
    printf("boolean: amOk = %d\n", amOk);
    amOk = !amOk;
    printf("boolean: amOk = %d\n", amOk);

    amBad = 0;
    printf("boolean: amBad = %d\n", amBad);
    printf("amOk == amBad = %d\n", amOk==amBad);
    printf("amOk != amBad = %d\n", amOk!=amBad);
    amOk = !amOk;

    printf("(5 < 9) && (9 < 2) = %d\n", (5 < 9) && (9 < 2));
    printf("(5 > 9) || (9 > 2) = %d\n", (5 > 9) || (9 > 2));

    printf("c == 'D' = %d\n", c == 'D');

    /* working with sizeof() unary operator */
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
