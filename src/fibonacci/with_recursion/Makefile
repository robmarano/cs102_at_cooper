#
# Makefile for fibonacci
#
# The Build Rules for This Program
#
# Variables
APP=fibonacci
CC=gcc
#CFLAGS=-Wall -Werror -ansi -g -Winfinite-recursion
CFLAGS=
#CFLAGS=-Wall -Werror -ansi -pedantic-errors -g
LDFLAGS=
OBJ=$(APP).o
EXE=$(APP).exe
LOG=$(APP).log

# Rules
# for compilation of c files into object files
%.o: %.c 
	$(CC) $(CFLAGS) -c -o $@ $<

# for linking object files into an executable program file
$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

# This is to trick make to know that "clean" and "run" are targets
.PHONY: clean run

# This rule replaces the run.$(APP).sh bash script
#	./$(EXE) | tee $(LOG)
run: $(EXE)
	./$(EXE)

clean:
	/bin/rm -f $(OBJ) $(EXE) $(LOG)
