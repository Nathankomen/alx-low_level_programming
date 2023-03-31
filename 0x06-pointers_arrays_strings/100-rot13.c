#include "main.h"
/**
 * rot13 - rot13 encoder
 * @n: string params pointer
 * Return: *n
 */
char *rot13(char *n)
{
int j, k;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (j = 0; n[j] != '\0'; j++)
{
for (k = 0; k < 52; k++)
{
if (n[j] == data1[k])
{
n[j] = datarot[k];
break;
}
}
}
return (n);
}
