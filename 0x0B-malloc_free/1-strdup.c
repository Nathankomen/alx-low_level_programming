#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * contains a copy of the string given as a parameter.
 * @str: array size
 * Return: array
 */
char *_strdup(char *str)
{
int d = 0, e = 1;
char *s;
if (str == NULL)
return (NULL);
while (str[e])
{
e++;
}
s = malloc((sizeof(char) * e) +1);
if (s == NULL)
return (NULL);
while (d < e)
{
s[d] = str[d];
d++;
}
s[d] = '\0';
return (s);
}
