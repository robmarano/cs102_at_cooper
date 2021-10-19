#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n)
{
    if (n < 1)
        return(n);
    
    int fibo = 1;
    int fiboPrev = 1;

    int i;
    for (i=2; i < n; i++)
    {
        int temp = fibo;
        fibo += fiboPrev; /* fibo = fibo + fiboPrev; */
        fiboPrev = temp;
    }
    return(fibo);
}

int main()
{
    int i;
    int fib;
    int limit = 16;
    for (i=0; i < limit; i++)
    {
        fib = fibonacci(i);
        printf("fib(%d) = %d\n", i, fib);
    }

    return(0);
}
