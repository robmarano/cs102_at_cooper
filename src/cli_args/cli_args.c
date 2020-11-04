#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
/* argc is # of input arguments; char *argv[] is a pointer to strings) */
{
    printf("atoi(\"aa\") = %d\n", atoi("aa"));
    printf("argc = %d\n", argc);
    int i;
    int theSum = 0;
    for (i=0; i < argc; i++)
    {
        theSum += atoi(argv[i]);
        printf("argument #%d is %s\n", i, argv[i]);
    }
    printf("The sum of your input values = %d\n", theSum);
    return(0);
}
