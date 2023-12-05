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

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (!(*h) && n == 0)
	{
		*h = node;
		return (node);
	}
	if (!(*h) && n >= 0)
		return (NULL);
	ptr = *h;
	for (i = 0 ; i < idx ; i++)
		ptr = ptr->next;
	if (!ptr)
	{
		ptr = add_dnodeint_end(h, n);
		return (node);
	}
	node->prev = ptr;
	node->next = ptr->next;
	ptr->next->prev = node;
	ptr->next = node;
	return (node);
}
