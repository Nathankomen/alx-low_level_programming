#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion - print sqrt of value
* @n: number to calculate sqrt
* Return: square root
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
* _sqrt - calculate square root
* @n: number to calculate sqrt
* @x: number to iterate
* Return: square root
*/
int _sqrt(int n, int x);
int _sqrt(int n, int x)
{
int sqrt = x * x;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (x);
return (_sqrt(n, x + 1));
}
