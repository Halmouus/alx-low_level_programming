#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to first node
 * Return: head node's data, or 0 if empty list
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;
if (*head == NULL)
return (0);
data = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return (data);
}
