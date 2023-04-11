#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: 1st input to concat
 * @s2: 2nd input to concat
 * Return: s1,s2 concat
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int z, p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
z = p = 0;
while (s1[z] != '\0')
z++;
while (s2[p] != '\0')
p++;
conct = malloc(sizeof(char) * (z + p + 1));
if (conct == NULL)
return (NULL);
z = p = 0;
while (s1[z] != '\0')
{
conct[z] = s1[z];
z++;
}
while (s2[p] != '\0')
{
conct[z] = s2[p];
z++, p++;
}
conct[z] = '\0';
return (conct);
}
