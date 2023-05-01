#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: index of the list where the new node should be added
 * @n: data of the inserted node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp, *next_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
if (idx == 0)
{
next_node = *head;
*head = new_node;
new_node->n = n;
new_node->next = next_node;
return (new_node);
}
temp = *head;
while (--idx)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}
next_node = temp->next;
temp->next = new_node;
new_node->n = n;
new_node->next = next_node;
return (new_node);
}
