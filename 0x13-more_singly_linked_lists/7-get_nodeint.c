#include "lists.h"
/**
 * get_nodeint_at_index - returns the node
 * @head: first node
 * @index: index of the node
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k = 0;
listint_t *temp = head;
while (temp && k < index)
{
temp = temp->next;
k++;
}
return (temp ? temp : NULL);
}
