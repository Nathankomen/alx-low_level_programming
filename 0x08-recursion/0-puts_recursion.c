#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - output string
* @s: string to output
* Return: 0
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
s++;
_puts_recursion(s);
}
