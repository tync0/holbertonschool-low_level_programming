#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node
 * @head: pointer to node
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
	if (!(*h))
	{
		*h = node;
		return (node);
	}
	ptr = *h;
	for (i = 0 ; i < idx ; i++)
	{
		if (ptr)
			ptr = ptr->next;
		else
			return (NULL);
	}
	node->prev = ptr;
	node->next = ptr->next;
	ptr->next->prev = node;
	ptr->next = node;
	return (node);
}
