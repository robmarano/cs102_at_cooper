#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <ncurses.h>

#define DELAY 30000

int main(int argc, char *argv[])
{
    int x = 0, y = 0;
    int max_y = 0, max_x = 0;
    int next_x = 0;
    int direction = 1;

    initscr();noecho();
    curs_set(FALSE);

    // Global var `stdscr` is created by the call to `initscr()`
    getmaxyx(stdscr, max_y, max_x);
    while(1)
    {
        getmaxyx(stdscr, max_y, max_x);
        clear();
        mvprintw(y, x, "o");
        refresh();

        usleep(DELAY);
        next_x = x + direction;
        if (next_x >= max_x || next_x < 0)
        {
            direction*= -1;
        } else {
            x+= direction;
        }
    }
    endwin();
    return(0);
}

int main2(int argc, char *argv[])
{
    initscr();
    noecho();
    curs_set(FALSE);
    sleep(1);
    endwin(); // Restore normal terminal behavior
    return(0);
}

int main1(void)
{
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!");	/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}

