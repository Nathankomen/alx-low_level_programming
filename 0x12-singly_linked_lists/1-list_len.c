#include <stdlib.h>
#include "lists.h"
/**
 * list_len - return number of elements
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t t = 0;
while (h)
{
t++;
h = h->next;
}
return (t);
}
