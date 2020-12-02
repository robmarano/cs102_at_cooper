# main.py

# Globals
FILENAME='workfile'
SIZE = 8

# Functions

def main():
    with open(FILENAME) as f:
        all_lines = f.readlines()
    for line in all_lines:
        print(line, end='')

def main2():
    with open(FILENAME) as f:
        for line in f:
            print(line, end='')

def main1():
    #This is a function
#    f = open('workfile', 'r')
#    f.close()
    with open('workfile') as f:
        read_data = f.read(SIZE)
        print(read_data)
    # We can check that the file has been automatically closed.
    print('File is closed = {}'.format(f.closed))

# Program Main
if __name__ == "__main__":
    # This is your program's main function
    main()
