#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int x);
/**
* _sqrt_recursion - print sqrt of value
* @n: number to calculate sqrt
* Return: square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
* actual_sqrt_recursion - calculate square root
* @n: number to calculate sqrt
* @x: number to iterate
* Return: square root
*/
int actual_sqrt_recursion(int n, int x)
{
if (x * x > n)
return (-1);
if (x * x == n)
return (x);
return (actual_sqrt_recursion(n, x + 1));
}
