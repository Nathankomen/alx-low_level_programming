#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int z;
for (z =0; z < argc; z++)
{
printf("%s\n", argv[z]);
}
return (0);
}
