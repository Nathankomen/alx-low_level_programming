#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid array
 * @grid: 2dim grid
 * @height: height
 * Description: frees grid memory
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
int v;
for (v = 0; v < height; v++)
{
free(grid[v]);
}
free(grid);
}
