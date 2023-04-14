#include <stdlib.h>
#include "main.h"
/**
 * * _memset - fills memory with byte
 * @s: memory area
 * @b: char
 * @n: number of times
 * Return: pointer to memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptnr;
if (nmemb == 0 || size == 0)
return (NULL);
ptnr = malloc(size * nmemb);
if (ptnr == NULL)
return (NULL);
_memset(ptnr, 0, nmemb * size);
return (ptnr);
}
