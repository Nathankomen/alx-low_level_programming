#include "main.h"
#include <stdio.h>
/**
* _strchr - Entry point
* @s: input
* @c: input
* Return: always 0 (success)
*/
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (NULL);
}
