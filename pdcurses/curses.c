#include "../curses.h"

int COLOR_PAIR(int n)
{
    return (((chtype)(n) << PDC_COLOR_SHIFT) & A_COLOR);
}

int PAIR_NUMBER(int n)
{
    return (((n)&A_COLOR) >> PDC_COLOR_SHIFT);
}

int getch()
{
    return wgetch(stdscr);
}

void ungetch(int ch)
{
    PDC_ungetch(ch);
}
