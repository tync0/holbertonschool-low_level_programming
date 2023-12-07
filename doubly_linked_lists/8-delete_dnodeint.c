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
	int i = 1;
	dlistint_t *ptr = *head;

	while (i != index)
	{
		if (!ptr->next)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	ptr->next = ptr->next->next;
	ptr->next->next->prev = ptr;
	ptr->next->next = NULL;
	ptr->next->prev = NULL;
	free(ptr);
	return (1);
}
