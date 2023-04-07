#include "main.h"
/**
* _pow_recursion - x raised to power y value
* @y: number of times of multiplication
* @x: multiplication number
* Return: integer
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
