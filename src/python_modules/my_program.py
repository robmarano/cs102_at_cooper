#!/usr/bin/env python
# fibonacci.py

import fibonacci.functions
#from fibonacci import fib, fib2

# Global Variables
N=20

# Functions

def main():
    fibonacci.functions.fib(N)
    fib_N = fibonacci.functions.fib2(N)
    print(fib_N)
    return

if __name__ == "__main__":
    # This is your program's main function
    main()

