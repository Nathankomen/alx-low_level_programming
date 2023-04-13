#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @min: range of values stored
* @max: values stored and number of elements
* Return: pointer to new array
*/
int *array_range(int min, int max)
{
int *p;
int j, s;
if (min > max)
return (NULL);
s = max - min + 1;
p = malloc(sizeof(int) * s);
if (p == NULL)
return (NULL);
for (j = 0; min <= max; j++)
p[j] = min++;
return (p);
}
