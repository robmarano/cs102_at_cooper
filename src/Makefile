#
# Makefile for sdl app
#
# The Build Rules for This Program
#
# Variables
APP=sdl_example
APP_FILES=
CC=gcc
# get SDL CFLAGS from `sdl2-config --libs --cflags`
#SDL_CFLAGS=-lSDL2 -I/usr/include/SDL2 -D_REENTRANT
CFLAGS=-ggdb3 -O0 --std=c99 -Wall -lSDL2_image -lm -I/usr/include -I/usr/include/SDL2 -D_REENTRANT
#CFLAGS=-Wall -Werror -ansi -std=c99 -g -I/usr/include
# other CFLAGS
#CFLAGS=-Wall -Werror -ansi -pedantic-errors -std=c99 -g
# linking flags
#LDFLAGS=-lm
LDFLAGS=-lSDL2 
# all the C source files end in .c
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
	$(CC) -o $@ $^ $(LDFLAGS)

# This is to trick make to know that "clean" and "run" are targets
.PHONY: clean run

# This rule this would split the output and copy to a log file
#	./$(EXE) | tee $(LOG)
run: $(EXE)
	./$(EXE)

clean:
	/bin/rm -f $(OBJS) $(EXE) $(LOG) $(APP_FILES)

