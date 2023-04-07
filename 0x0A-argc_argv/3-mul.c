#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int a = 0, b = 0;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a * b);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
