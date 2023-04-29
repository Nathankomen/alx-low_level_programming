#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 * Return: the data inside the elements
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int numb;
if (!head || !*head)
return (0);
numb = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (numb);
}
