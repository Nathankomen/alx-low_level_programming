#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0, sum = 0, i, j;
i = strlen(n1) - 1;
j = strlen(n2) - 1;
if (i + j + 2 > size_r)
return (0);
r[i + j + 2] = '\0';
while (i >= 0 || j >= 0)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (sum >= 10)
{
carry = 1;
sum -= 10;
}
else
carry = 0;
r[i + j + 1] = sum + '0';
i--;
j--;
}
if (carry == 1)
{
if (i + j + 2 > size_r)
return (0);
r[i + j + 1] = carry + '0';
return (&r[i + j + 1]);
}
else
return (&r[i + j + 2]);
}
