#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int j;
unsigned int m, sum = 0;
char *k;
if (argc > 1)
{
for (j = 1; j < argc; j++)
{
k = argv[j];
for (m = 0; m < strlen(k); m++)
{
if (k[m] < 48 || k[m] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(k);
k++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
