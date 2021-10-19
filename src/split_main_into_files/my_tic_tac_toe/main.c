/*
 * main.c
 *
 * This program plays Tic-Tac-Toe against the user!
 * The program uses a specified, not-perfect strategy.
 * The code uses only basic programming concepts.
 * Written by: Prof. Carl Sable <sable2@cooper.edu>
 */

#include <stdio.h>

#include "ticTacToe.h"

void initBoard(void);
void drawBoard(void);
int userFirst(void);

char board[BOARD_SIZE][BOARD_SIZE];
char user;
char computer;

int main()
{
    /* initialize board */
    initBoard();

    /* ask user if s/he wants to go first */
    int choice;
    user = 'X'; /* assume user wants to go first, hence 'X' */
    char computer = 'O';

    choice = userFirst(); /* 1 if yes; 0 if no */

    if (choice == 0) {
        computer = 'X';
        user = 'O';
    }

    /* display initial positions in board */
    drawBoard();

    /* play game */
    playGame();

    return(0);
}
