#include "function_pointers.h"
/**
 * int_index - return index if comparison = true, else -1
 * @array: array
 * @size: size of elements
 * @cmp: pointer to func
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int z;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (z = 0; z < size; z++)
{
if (cmp(array[z]))
return (z);
}
return (-1);
}
