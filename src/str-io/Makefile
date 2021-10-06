#
# Makefile for ADD_YOUR_PROGRAM_NAME_HERE
#
# The Build Rules for This Program
#
# Variables
CC=gcc
# ADD YOUR PROGRAM NAME HERE
APP=myCode
OBJ=$(APP).o
EXE=$(APP).exe
LOG=$(APP).log

# Rules
# for compilation of c files into object files
%.o: %.c 
	$(CC) -c -o $@ $<

# for linking object files into an executable program file
$(EXE): $(OBJ)
	$(CC) -o $@ $^

# This is to trick make to know that "clean" and "run" are targets
.PHONY: clean run

# This rule replaces the run.$(APP).sh bash script
#	./$(EXE) | tee $(LOG)
run: $(EXE)
	./$(EXE)

clean:
	/bin/rm -f $(OBJ) $(EXE) $(LOG)
