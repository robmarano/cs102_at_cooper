
# module fibonacci

# Functions

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

