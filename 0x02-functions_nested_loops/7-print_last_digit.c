#include "main.h"
/**
 * print_last_digit - function that print the last digit
 * @n: function parameter
 * Return: k
 */

int print_last_digit(int n)
{
int k;

k = n % 10;
if (n < 0)
k = -k;
_putchar(k + '0');
return (k);
}
