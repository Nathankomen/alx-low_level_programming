#include <stdio.h>
/**
 * reverse_array - unction that reverses the content of
 * an array of integers
 * @a: array
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int tem;
int i;

for (i = 0; i < n / 2; i++)
{
tem = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tem;
}
}
