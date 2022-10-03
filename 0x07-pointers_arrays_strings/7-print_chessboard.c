#include "main.h"
/**
 *print_chessboard - prints a chessboard
 *@[8]: input 2 dimensional array
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
int b, c;
for (b = 0; b <= 7; b++)
{
for (c = 0; c <= 7; c++)
{
_putchar(a[b][c]);
}
_putchar('\n');
}
}
