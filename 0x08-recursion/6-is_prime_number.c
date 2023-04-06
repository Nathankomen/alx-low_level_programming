#include "main.h"
#include <stdio.h>

int check_prime(int n,int z);
/**
* check_prime - checks if number is prime or not
* @n: number to check
* @z: times to iterate
* Return: integer
*/
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
/**
* check_prime - checks if number is prime or not
* @n: number to check
* @z: times to iterate
* Return: 1 for prime 0 otherwise
*/
int check_prime(int n,int z)
{
if ((n / z) < z)
return (1);
if (n % z ==0 && z > 1)
return (0);
if (n <= 1)
return (0);
return (check_prime(n, z + 1));
}
