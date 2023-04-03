#include "main.h"
#include <stdio.h>
/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: always 0 (success)
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *on = haystack;
char *in = needle;
while (*on == *in && *in != '\0')
{
on++;
in++;
}
if (*in == '\0')
return (haystack);
}
return (NULL);
}
