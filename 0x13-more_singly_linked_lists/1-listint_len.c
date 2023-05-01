#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to header
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
return (0);
while (h)
{
h = h->next;
count++;
}
return (count);
}
