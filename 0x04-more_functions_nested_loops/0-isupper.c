#include "main.h"

/**
 * _isupper - checks for the lowercase character
 * @c: the character to be checke
 * Return: 1 for the uppercase and 0 for anything else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
