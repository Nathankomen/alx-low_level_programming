#include <stdio.h>
/**
* _strlen - returns the length of a string
* @str: string to get the length
* Return: length of @str.
*/

size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
