#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: array size
 * @c: char assigned
 * Description: create array and assign char c
 * Return: pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int w;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (w = 0; w < size; w++)
str[w] = c;
return (str);
}
