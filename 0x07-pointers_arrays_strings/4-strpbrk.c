
#include "main.h"
#include <stdio.h>
/**
* _strpbrk - Entry point
* @s: input
* @accept: input
* Return: always 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
int j, k;
for (j = 0; s[j] != '\0'; j++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (s[j] == accept[k])
return (s + j);
}
}
return (NULL);
}
