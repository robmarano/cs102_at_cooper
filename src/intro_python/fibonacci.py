#!/usr/bin/env python

# fibonacci.py

# Global Variables
N=20

# Functions

# NOT LIKE in C
# int fib(int n) {...}
#
def fib(n):
    """Print a Fibonacci series up to n."""
    a,b = 0,1
    while a < n:
        print(a, end=' ')
        a,b = b,a+b
    print()
    return

def fib2(n):
    """Return a list containing the Fibonacci series up to n."""
    result = []
    a,b = 0,1
    while a<n:
        result.append(a)
        a,b = b,a+b
    return result

def main():
    fib(N)
    fib_N = fib2(N)
    print(fib_N)
    return

if __name__ == "__main__":
    # This is your program's main function
    main()

