#
# Makefile for star.c
#
CC=gcc
OBJ=star.o
EXE=star.exe

%.o: %.c 
	$(CC) -c -o $@ $<

$(EXE): $(OBJ)
	$(CC) -o $@ $^

.PHONY: clean

clean:
	/bin/rm -f $(OBJ) $(EXE)
