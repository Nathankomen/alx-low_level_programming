#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes.
 * Return: pointer allocated in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *out;
unsigned int l1, l2, lout, t;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (l1 = 0; s1[l1] != '\0'; l1++);

for (l2 = 0; s2[l2] != '\0'; l2++);
if (n > l2)
n = l2;
lout = l1 + n;
out = malloc(lout + 1);
if (out == NULL)
return (NULL);
for (t = 0; t < lout; t++)
if (t < l1)
out[t] = s1[t];
else
out[t] = s2[t - ls1];
out[t] = '\0';
return (out);
}
