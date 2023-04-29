#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer
 * @n: data to insert
 * Return: pointer, or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw;
nw = malloc(sizeof(listint_t));
if (!nw)
return (NULL);
nw->n = n;
nw->next = *head;
*head = nw;
return (nw);
}
