#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: pointer to node
 * @index: val
 * Return: number of nodes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = *head;

	while (i != index)
	{
		if (!ptr->next)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	ptr->prev->next = ptr->next;
	ptr->next = NULL;
	ptr->next->prev = ptr->prev;
	ptr->prev = NULL;
	free(ptr);
	return (1);
}
