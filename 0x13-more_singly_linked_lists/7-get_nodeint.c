#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: index of the node
 * Return: data of the matching node, or 0 if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
node = head;
while (index--)
{
if (node == NULL)
return (NULL);
node = node->next;
}
return (node);
}
