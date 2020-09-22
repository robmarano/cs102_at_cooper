#
# Makefile for ascii.c
#
CC=gcc
APP=ascii
OBJ=$(APP).o
EXE=$(APP).exe
LOG=$(APP).log

%.o: %.c 
	$(CC) -c -o $@ $<

$(EXE): $(OBJ)
	$(CC) -o $@ $^

.PHONY: clean run

run: $(EXE)
	./$(EXE)

clean:
	/bin/rm -f $(OBJ) $(EXE) $(LOG)
