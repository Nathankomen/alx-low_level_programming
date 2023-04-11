#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string
 * Return: number of words
 */
int count_word(char *s)
{
int flag, d, m;

flag = 0;
m = 0;

for (d = 0; s[d] != '\0'; d++)
{
if (s[d] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
m++;
}
}

return (m);
}
/**
 * **strtow - split string into words
 * @str: string to split
 * Return: pointer (Success) or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int j, l = 0, len = 0, words, z = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (j = 0; j <= len; j++)
{
if (str[j] == ' ' || str[j] == '\0')
{
if (z)
{
end = j;
tmp = (char *) malloc(sizeof(char) * (z + 1));
if (tmp == NULL)
return (NULL);

while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[l] = tmp - z;
l++;
z = 0;
}
}
else if (z++ == 0)
start = j;
}
matrix[l] = NULL;
return (matrix);
}
