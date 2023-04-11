#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: array size
 * @c: character to fill in array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
unsigned int w;
char *s;
if (size == 0)
return (NULL);
s = malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (w = 0; w < size; w++)
{
s[w] = c;
}
return (s);
}
