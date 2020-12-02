# main.py

import csv

# Globals
STOCK='AAPL'
FILENAME='EOD-{}.csv'.format(STOCK)
# Schema
# Date,Open,High,Low,Close,Volume,Dividend,Split,Adj_Open,Adj_High,Adj_Low,Adj_Close,Adj_Volume
NEWFILE='{}-day-closes.csv'.format(STOCK)
SIZE = 8

# Functions

def main():
    close_file = open(NEWFILE,'w',newline='')
    stock_file = open(FILENAME, newline='')
#    schema = stock_file.readline()
#    stock_file.close()
    schema='Date,Close\n'
    close_file.write(schema)
    stock_file = open(FILENAME, newline='')
    reader = csv.DictReader(stock_file, delimiter=',')
    for line in reader:
        print('Date = {}, Close = {}'.format(line['Date'], line['Close']))
        close_file.write('{},{}\n'.format(line['Date'], line['Close']))
    close_file.close()
    stock_file.close()

def main2():
    with open(FILENAME, newline='') as stock_file:
        reader = csv.DictReader(stock_file, delimiter=',')
        for line in reader:
            print('Date = {}, Close = {}'.format(line['Date'], line['Close']))

def main1():
    with open(FILENAME, newline='') as stock_file:
        reader = csv.reader(stock_file, delimiter=',')
        for line in reader:
            print(', '.join(line))

# Program Main
if __name__ == "__main__":
    # This is your program's main function
    main()
