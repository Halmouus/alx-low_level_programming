#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to first node
 * Return: sum of data, or 0 if empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *node;
if (head == NULL)
return (0);
node = head;
while (node)
{
sum += node->n;
node = node->next;
}
return (sum);
}
