#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers
 * @width: input the width
 * @height: input the height
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
int **le;
int m, n;
if (width <= 0 || height <= 0)
return (NULL);
le = malloc(sizeof(int *) * height);
if (le == NULL)
return (NULL);
for (m = 0; m < height; m++)
{
le[m] = malloc(sizeof(int) * width);
if (le[m] == NULL)
{
for (; m >= 0; m--)
free(le[m]);
free(le);
return (NULL);
}
}
for (m = 0; m < height; m++)
{
for (n = 0; n < width; n++)
le[m][n] = 0;
}
return (le);
}
