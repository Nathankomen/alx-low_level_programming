#include "main.h"
/**
 * print_triangle - entry point
 * description: print the diagonals
 * @size:size of the triangle
 *
 */
void print_triangle(int size)
{
int row, hashes, spaces;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
{
_putchar(' ');
}
for (hashes = 1; hashes <= row; hashes++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
