#include "main.h"
/**
* _strlen_recursion - print the string length
* @s: string
* Return: string length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
/**
* comparator - compare string characters
* @s: string
* @t: smallest iterator
* @t1: largest iterator
* Return: .
*/
int comparator(char *s, int t, int t1);
int comparator(char *s, int t, int t1)
{
if (*(s + t) == *(s + t1))
{
if (t == t1 || t == t1 + 1)
return (1);
return (0 + comparator(s, t + 1, t1 - 1));
}
return (0);
}
/**
* is_palindrome - detect string is palindrome
* @s: string
* Return: 1 if palindrome,0 otherwise
*/
int is_palindrome(char *s);
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
