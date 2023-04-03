#include "main.h"

/**
* _memset - Entry point
* @s: pointed destination
* @b: constant byte
* @n: bytes
* Return: always 0 (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int d;
for (d = 0; d < n; d++)
s[d] = b;
return (s);
}
