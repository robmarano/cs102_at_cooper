/*
 * This program plays Tic-Tac-Toe against the user!
 * The program uses a specified, not-perfect strategy.
 * The code uses only basic programming concepts.
 * Written by: Carl Sable
 */

#include <stdio.h>
#include "tic_tac_toe.h"

/* Make sure board starts off empty. */
void init_board(void)
{
  int row, col;

  for (row = 0; row < 3; row++)
    for (col = 0; col < 3; col++)
      board[row][col] = ' ';

  return;
}

/* Display the board to standard output. */
void draw_board(void)
{
  int row;

  printf("\n");
  for (row = 0; row < 3; row++)
  {
    printf("   *   *   \n");
    printf(" %c * %c * %c \n",
       board[row][0], board[row][1], board[row][2]);
    printf("   *   *   \n");
    if (row != 2)
      printf("***********\n");
  }
  printf("\n");

  return;
}

/*
 * Ask if user wants to go first.
 * Returns 1 if yes, 0 if no.
 */
int user_first(void)
{
  char response;

  printf("Do you want to go first? (y/n) ");
  do
  {
    response = getchar();
  } while ((response != 'y') && (response != 'Y') &&
       (response != 'n') && (response != 'N'));

  if ((response == 'y') || (response == 'Y'))
    return 1;
  else
    return 0;
}

/*
 * Ask if user wants to play again.
 * Returns 1 if yes, 0 if no.
 */
int play_again(void)
{
  char response;

  printf("Do you want to play again? (y/n) ");
  do
  {
    response = getchar();
  } while ((response != 'y') && (response != 'Y') &&
       (response != 'n') && (response != 'N'));

  if ((response == 'y') || (response == 'Y'))
    return 1;
  else
    return 0;
}

/*
 * If middle square is empty, return 5;
 * otherwise return 0.
 */
int middle_open(void)
{
  if (board[1][1] == ' ')
    return 5;
  else
    return 0;
}

/* 
 * Return the number of an empty corner, if one exists;
 * otherwise return 0.
 */
int find_corner(void)
{
  if (board[0][0] == ' ')
    return 1;
  if (board[0][2] == ' ')
    return 3;
  if (board[2][0] == ' ')
    return 7;
  if (board[2][2] == ' ')
    return 9;

  return 0;
}

/*
 * Return the number of an empty side square, if one exists;
 * otherwise return 0.
 */
int find_side(void)
{
  if (board[0][1] == ' ')
    return 2;
  if (board[1][0] == ' ')
    return 4;
  if (board[1][2] == ' ')
    return 6;
  if (board[2][1] == ' ')
    return 8;

  return 0;
}

/* Check if the given square is valid and empty. */
int square_valid(int square)
{
  int row, col;

  row = (square - 1) / 3;
  col = (square - 1) % 3;

  if ((square >= 1) && (square <= 9))
  {
    if (board[row][col] == ' ')
      return 1;
  }

  return 0;
}

/* Check if the given symbol has already won the game. */
int symbol_won(char symbol)
{
  int row, col;

  for (row = 0; row < 3; row++)
  {
    if ((board[row][0] == symbol) &&
    (board[row][1] == symbol) &&
    (board[row][2] == symbol))
      return 1;
  }

  for (col = 0; col < 3; col++)
  {
    if ((board[0][col] == symbol) &&
    (board[1][col] == symbol) &&
    (board[2][col] == symbol))
      return 1;
  }

  if ((board[0][0] == symbol) &&
      (board[1][1] == symbol) &&
      (board[2][2] == symbol))
    return 1;

  if ((board[0][2] == symbol) &&
      (board[1][1] == symbol) &&
      (board[2][0] == symbol))
    return 1;

  return 0;
}

/* 
 * Find a win, if any, for the given symbol.
 * If a winning square exists, return the square;
 * otherwise, return 0.
 */
int find_win(char symbol)
{
  int square, row, col;
  int result = 0;

  /*
   * Loop through the 9 squares.
   * For each, if it is empty, fill it in with the given
   * symbol and check if this has resulted in a win.
   * If so, keep track of this square in result.
   * Either way, reset the square to empty afterwards.
   * After the loop, if one or more wins have been found,
   * the last will be recorded in result.
   * Otherwise, result will still be 0.
   */
  for (square = 1; square <= 9; square++)
  {
    row = (square - 1) / 3;
    col = (square - 1) % 3;

    if (board[row][col] == ' ')
    {
      board[row][col] = symbol;
      if (symbol_won(symbol))
    result = square;
      board[row][col] = ' ';
    }
  }

  return result;
}

/* Choose a move for the computer. */
void computer_move(void)
{
  int square;
  int row, col;

  /* Use first strategy rule that returns valid square */
  square = find_win(computer);
  if (!square)
    square = find_win(user);
  if (!square)
    square = middle_open();
  if (!square)
    square = find_corner();
  if (!square)
    square = find_side();

  printf("\nI am choosing square %d!\n", square);

  row = (square - 1) / 3;
  col = (square - 1) % 3;

  board[row][col] = computer;

  return;
}

/* Have the user choose a move. */
void player_move(void)
{
  int square;
  int row, col;

  do
  {
    printf("Enter a square: ");
    scanf("%d", &square);
  } while (!square_valid(square));

  row = (square - 1) / 3;
  col = (square - 1) % 3;

  board[row][col] = user;

  return;
}

/* Loop through 9 turns or until somebody wins. */
void play_game(void)
{
  int turn;

  for (turn = 1; turn <= 9; turn++)
  {
    /* Check if turn is even or odd 
       to determine which player should move. */
    if (turn % 2 == 1)
    {
      if (computer == 'X')
        computer_move();
      else
        player_move();
    }
    else
    {
      if (computer == 'O')
        computer_move();
      else
        player_move();
    }

    draw_board();

    if (symbol_won(computer)) {
      printf("\nI WIN!!!\n\n");
      return;
    }
    else if (symbol_won(user)) {
      printf("\nCongratulations, you win!\n\n");
      return;
    }
  }

  printf("\nThe game is a draw.\n\n");
  return;
}

