#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: argument
 */
void print_chessboard(char (*a)[8])
{
int i = 0, j;
while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
i++;
_putchar('\n');
}
}
