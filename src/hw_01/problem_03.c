#include <stdio.h>

/* see https://en.cppreference.com/w/cpp/language/escape */
int main() {
    char a[] = "Hello";
    printf("%s\n", a);

    char z = '\n';
    printf("%X\n", z);

    z = '\a';
    printf("%c\n", z);
    printf("%X\n", z);

    return(0);
}
