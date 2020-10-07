#
# Makefile for tic_tac_toe
#
# The Build Rules for This Program
#
# Variables
APP=tic_tac_toe
CC=gcc
CFLAGS=-Wall -Werror -ansi -std=c99 -g
#CFLAGS=-Wall -Werror -ansi -pedantic-errors -std=c99 -g
LDFLAGS=
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
EXE=$(APP).exe
LOG=$(APP).log

# Rules
# for compilation of c files into object files
%.o: %.c 
	$(CC) $(CFLAGS) -c -o $@ $<

# for linking object files into an executable program file
$(EXE): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

# This is to trick make to know that "clean" and "run" are targets
.PHONY: clean run

# This rule replaces the run.$(APP).sh bash script
#	./$(EXE) | tee $(LOG)
run: $(EXE)
	./$(EXE)

clean:
	/bin/rm -f $(OBJ) $(EXE) $(LOG)
