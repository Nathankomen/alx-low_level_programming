#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: the character to be checke
 * Return: 1 for tdigit character and 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
