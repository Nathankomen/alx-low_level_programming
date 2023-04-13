#include "main.h"
/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
* Return: pointer to the allocated memory.
*/
void * _calloc(unsigned int nmemb, unsigned int size)
{
char *c;
unsigned int d;
if (nmemb == 0 || size == 0)
return (NULL);
c = malloc(nmemb * size);
if (c == NULL)
return (NULL);
for (d = 0; d < (nmemb * size); d++)
c[d] = 0;
return (c);
}
