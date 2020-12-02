
def main():
    #This is a function
    f = open('workfile', 'w')
    with open('workfile') as f:
        read_data = f.read()
        print(read_data)
    # We can check that the file has been automatically closed.
    f.closed

if __name__ == "__main__":
    # This is your program's main function
    main()
