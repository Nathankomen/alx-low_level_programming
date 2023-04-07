#include "main.h"

int definite_prime(int n, int z);
/**
* is_prime_number - checks if number is prime or not
* @n: number to check
* Return: 1 if prime,0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (definite_prime(n, n - 1));
}
/**
* definite_prime - checks if number is prime or not
* @n: number to check
* @z: times to iterate
* Return: 1 for prime, 0 otherwise
*/
int definite_prime(int n, int z)
{
if (z == 1)
return (1);
if (n % z == 0 && z > 0)
return (0);
return (definite_prime(n, z - 1));
}
