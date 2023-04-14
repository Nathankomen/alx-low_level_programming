#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat -  concatenates two strings.
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes
 * Return: pointer to the result string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int k = 0, m = 0, lenght1 = 0, lenght2 = 0;
while (s1 && s1[lenght1])
lenght1++;
while (s2 && s2[lenght2])
lenght2++;
if (n < lenght2)
str = malloc(sizeof(char) * (lenght1 + n + 1));
else
str = malloc(sizeof(char) * (lenght1 + lenght2 + 1));
if (!str)
return (NULL);
while (k < lenght1)
{
str[k] = s1[k];
k++;
}
while (n < lenght2 && k < (lenght1 + n))
str[k++] = s2[m++];
while (n >= lenght2 && k < (lenght1 + lenght2))
str[k++] = s2[m++];
str[k] = '\0';
return (str);
}
