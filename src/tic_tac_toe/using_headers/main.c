/*
 * This program plays Tic-Tac-Toe against the user!
 * The program uses a specified, not-perfect strategy.
 * The code uses only basic programming concepts.
 * Written by: Carl Sable
 */

#include <stdio.h>
#include "tic_tac_toe.h"

/* 
 * Initialize the board, ask who goes first, play a game,
 * ask if user wants to play again.
 */
int main(void)
{
  while(1)
  {
    init_board();
    if (user_first())
    {
      computer = 'O';
      user = 'X';
    }
    else
    {
      computer = 'X';
      user = 'O';
    }
    play_game();
    if (!play_again())
      break;
  }
  return 0;
}

