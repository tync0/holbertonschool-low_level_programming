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

	ptr = get_dnodeint_at_index(*h, idx);
	if (!(*h) || !ptr || !node)
		return (NULL);
	node->n = n;
	node->prev = ptr;
	ptr->next = node;
	node->next = ptr->next->next;
	return (node);
}
