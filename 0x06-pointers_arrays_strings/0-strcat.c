#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i = 0;

/* Find the length of dest string */
while (dest[dest_len] != '\0')
dest_len++;

/* Append src string to dest string */
while (src[i] != '\0')
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

/* Add a terminating null byte */
dest[dest_len] = '\0';

return (dest);
}
