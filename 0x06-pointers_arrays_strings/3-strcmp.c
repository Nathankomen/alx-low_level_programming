#include "main.h"
/**
 *  _strcmp - compares two strings
 * @s1: input value
 * @s2: input value
 * @n: s1[n] - s2[n]
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
int n = 0;

while (s1[n] != '\0' && s2[n] != '\0')
{
if (s1[n] != s2[n])
{
return (s1[n] - s2[n]);
}
n++;
}
return (0);
}
