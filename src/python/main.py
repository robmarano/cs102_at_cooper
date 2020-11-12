# main.py

# Global Variables
x = 1000
y = 100

def myMain():
    #This is a function
    sum = x+y
    return(sum)

if __name__ == "__main__":
    # This is your program's main function
    retVal = myMain()
    retStr = "return value = {}".format(retVal)
    print(retStr)

