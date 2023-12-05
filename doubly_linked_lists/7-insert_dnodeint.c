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
		if (!ptr->next && i + 1 == idx)
			return (add_dnodeint_end(h, n));
		else if (!ptr->next)
			return (NULL);
	}
	node->n = n;
	node->prev = ptr;
	node->next = ptr->next;
	ptr->next->prev = node;
	ptr->next = node;
	return (node);
}
