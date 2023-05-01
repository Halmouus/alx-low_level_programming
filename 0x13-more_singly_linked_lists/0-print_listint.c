#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to header
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (0);
temp = h;
while (temp)
{
printf("%d\n", temp->n);
count++;
temp = temp->next;
}
return (count);
}