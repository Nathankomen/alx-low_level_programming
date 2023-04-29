#include "lists.h"
/**
 * free_listint_safe - frees linked list
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
size_t leng = 0;
int dif;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
dif = *h - (*h)->next;
if (dif > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
leng++;
}
else
{
free(*h);
*h = NULL;
leng++;
break;
}
}
*h = NULL;
return (leng);
}
