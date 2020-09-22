#
# Makefile for random.c
#
# The Build Rules for This Program
#
# Variables
CC=gcc
CFLAGS=-Wall -Werror -ansi -g
#CFLAGS=-Wall -Werror -ansi -pedantic-errors -g
LDFLAGS=
APP=random
OBJ=$(APP).o random_funcs.o
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
