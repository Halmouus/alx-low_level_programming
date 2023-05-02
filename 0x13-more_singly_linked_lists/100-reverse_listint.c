#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node of the list
 *
 * Return: a pointer to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL, *next_node = NULL;
if (*head == NULL)
return (0);
while (*head != NULL)
{
next_node = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = next_node;
}
*head = prev_node;
return (*head);
}

