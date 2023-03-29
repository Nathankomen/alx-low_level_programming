#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*ptr)
ptr++;
while (*src)
*ptr++ = *src++;
*ptr = '\0';
return dest;
}
