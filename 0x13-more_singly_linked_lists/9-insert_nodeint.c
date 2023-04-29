#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: index to add new node
 * @n: data to insert in new node
 * Return: pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *nw;
listint_t *temp = *head;
nw = malloc(sizeof(listint_t));
if (!nw || !head)
return (NULL);
nw->n = n;
nw->next = NULL;
if (idx == 0)
{
nw->next = *head;
*head = nw;
return (nw);
}
for (j = 0; temp && j < idx; j++)
{
if (j == idx - 1)
{
nw->next = temp->next;
temp->next = nw;
return (nw);
}
else
temp = temp->next;
}
return (NULL);
}
