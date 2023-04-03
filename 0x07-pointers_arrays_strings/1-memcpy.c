#include "main.h"
/**
* _memcpy - Entry point
* @dest: pointed destination
* @src: input
* @n: input
* Return: always 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int q;
for (q = 0; q < n; q++)
dest[q] = src[q];
return (dest);
}
