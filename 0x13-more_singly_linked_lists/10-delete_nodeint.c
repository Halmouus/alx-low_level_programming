#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to first node
 * @index: index of the list to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev_node, *next_node;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
temp = *head;
while (index--)
{
if (temp == NULL)
return (-1);
prev_node = temp;
temp = temp->next;
}
if (temp->next == NULL)
return (-1);
next_node = temp->next;
prev_node->next = next_node;
free(temp);
return (1);
}
