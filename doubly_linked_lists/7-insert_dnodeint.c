#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: pointer to node
 * @idx: val
 * @n: val
 * Return: number of nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *node = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (!(*h) && idx == 0)
		return (add_dnodeint(h, n));
	else if (!*h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!node)
		return (NULL);
	ptr = *h;
	for (i = 0 ; i < idx ; i++)
	{
		ptr = ptr->next;
		if (!ptr && i == idx - 1)
			return (add_dnodeint_end(h, n));
		else if (!ptr)
			return (NULL);
	}
	node->n = n;
	node->prev = ptr->prev;
	node->next = ptr;
	ptr->prev->next = node;
	ptr->prev = node;
	return (node);
}
