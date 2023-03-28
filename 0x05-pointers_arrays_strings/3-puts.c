#include <stdio.h>
/**
* _puts - print a string
* @str: string to print
* Return: void
*/

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
