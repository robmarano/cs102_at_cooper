/*
 * ticTacToe.h
 *
 * This program plays Tic-Tac-Toe against the user!
 * The program uses a specified, not-perfect strategy.
 * The code uses only basic programming concepts.
 * Written by: Prof. Carl Sable <sable2@cooper.edu>
 */

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#define BOARD_SIZE 3

/* Note: define board in your main.c */
char board[BOARD_SIZE][BOARD_SIZE];
char user;
char computer;

/* Create the board; make sure it starts off empty */
void initBoard(void);

/* Display the board to STDOUT */
void drawBoard(void);

/* Ask if user wants to go first.
 * Returns 1 if yes, 0 if no */
int userFirst(void);

/* Play game */
void playGame(void);

int symbolWon(char);
int findWin(char);
int middleOpen(void);
int findCorner(void);
int findSide(void);
void computerMove(void);
void playerMove(void);
int squareValid(int);


#endif /* endif of TIC_TAC_TOE_H */
