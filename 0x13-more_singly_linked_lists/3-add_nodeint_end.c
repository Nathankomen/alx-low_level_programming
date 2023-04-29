#include "lists.h"
/**
 * add_nodeint_end - adds node at the endt
 * @head: pointer
 * @n: data to insert
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nw;
listint_t *temp = *head;
nw = malloc(sizeof(listint_t));
if (!nw)
return (NULL);
nw->n = n;
nw->next = NULL;
if (*head == NULL)
{
*head = nw;
return (nw);
}
while (temp->next)
temp = temp->next;
temp->next = nw;
return (nw);
}
