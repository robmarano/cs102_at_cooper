/*
 * This program plays Tic-Tac-Toe against the user!
 * The program uses a specified, not-perfect strategy.
 * The code uses only basic programming concepts.
 * Written by: Carl Sable
 */

#ifndef TIC_TACK_TOE
#define TIC_TACK_TOE

#include <stdio.h>

void init_board(void);
void draw_board(void);
int user_first(void);
int play_again(void);
int symbol_won(char);
int find_win(char);
int middle_open(void);
int find_corner(void);
int find_side(void);
void computer_move(void);
int square_valid(int);
void player_move(void);
void play_game(void);

char board[3][3];
char computer, user;

#endif /* TIC_TACK_TOE */
