#include <stdio.h>

int main(int argc, char *argv[])
/* argc is # of input arguments; char *argv[] is a pointer to strings) */
{
    printf("argc = %d\n", argc);
    int i;
    for (i=0; i < argc; i++)
    {
        printf("argument #%d is %s\n", i, argv[i]);
    }
    return(0);
}
