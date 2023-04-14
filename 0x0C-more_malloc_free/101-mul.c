#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if string contains non-digit character
 * @s: string evaluated
 * Return: 0 if a non-digit, 1 otherwise
 */
int is_digit(char *s)
{
int m = 0;
while (s[m])
{
if (s[m] < '0' || s[m] > '9')
return (0);
m++;
}
return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
int m = 0;
while (s[m] != '\0')
{
m++;
}
return (m);
}
/**
 * errors - handles errors
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiply two positive numbers
 * @argc: arguments number
 * @argv: arguments array
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *t1, *t2;
int lenght1, lenght2, lenght, j, cary, dgt, dgt1, *rsult, k = 0;
t1 = argv[1], t2 = argv[2];
if (argc != 3 || !is_digit(t1) || !is_digit(t2))
errors();
lenght1 = _strlen(t1);
lenght2 = _strlen(t2);
lenght = lenght1 + lenght2 + 1;
rsult = malloc(sizeof(int) * lenght);
if (!rsult)
return (1);
for (j = 0; j <= lenght1 + lenght2; j++)
rsult[j] = 0;
for (lenght1 = lenght1 - 1; lenght1 >= 0; lenght1--)
{
dgt = t1[lenght1] - '0';
cary = 0;
for (lenght2 = _strlen(t2) - 1; lenght2 >= 0; lenght2--)
{
dgt1 = t2[lenght2] - '0';
cary += rsult[lenght1 + lenght2 + 1] + (dgt *dgt1);
rsult[lenght1 + lenght2 + 1] = cary % 10;
cary /= 10;
}
if (cary > 0)
rsult[lenght1 + lenght2 + 1] += cary;
}
for (j = 0; j < lenght - 1; j++)
{
if (rsult[j])
k = 1;
if (k)
_putchar(rsult[j] + '0');
}
if (!k)
_putchar('0');
_putchar('\n');
free(rsult);
return (0);
}
