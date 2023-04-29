#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Count of unique node
 * @head: A pointer to the head of  listint_t
 * Return: If the list not loop - 0.
 * Otherwise - the number of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
tortoise = head->next;
hare = (head->next)->next;
while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
hare = hare->next;
}
tortoise = tortoise->next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
}
return (nodes);
}
tortoise = tortoise->next;
hare = (hare->next)->next;
}
return (0);
}
/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, indx = 0;
nodes = looped_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (indx = 0; indx < nodes; indx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
