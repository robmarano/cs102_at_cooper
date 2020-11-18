# main.py

# Global Variables
a = ['Mary','had','a','little','lamb']

def main():
    b = 'little'
    for i in range(len(a)):
        if a[i]==b:
            continue
        print(a[i])
    return

if __name__ == "__main__":
    # This is your program's main function
    main()

