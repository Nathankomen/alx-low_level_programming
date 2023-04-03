#include "main.h"
/**
* print_chessboard - Entry point
* @a: array
* Return: always 0 (success)
*/
void print_chessboard(char (*a)[8])
{
int m, w;
for (m = 0; m < 8; m++)
{
for (w = 0; w < 8; w++)
_putchar(a[m][w]);
_putchar('\n');
}
}
