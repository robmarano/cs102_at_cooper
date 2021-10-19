#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n)
{
    if (n <= 1)
    {
        return(n);
    }
    else
    {
        /* if ( (n % 0xFF) == 0 )
        printf("%d ",n);
        */
        return( fibonacci(n-1) + fibonacci(n-2) );
    }
}

int main()
{
    int i;
    int limit = 8;

    for (i=0; i < limit; i++)
    {
        int fib = fibonacci(i);
        printf("fib(%d) = %d\n", i, fib);
    }

    return(0);
}
