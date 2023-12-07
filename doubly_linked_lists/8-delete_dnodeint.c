#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a new node
 * @head: pointer to node
 * @index: val
 * Return: number of nodes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = *head;

	if (!ptr)
		return (-1);
	if (ptr->next && index == 0)
	{
		ptr->next = ptr->next->next;
		ptr->next->prev = NULL;
		ptr->next = NULL;
		free(ptr);
		return (1);
	}
	if (index == 0)
	{
		free(ptr);
		return (1);
	}
	while (i != index)
	{
		if (!ptr)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	if (ptr->next)
	{
		ptr->prev->next = ptr->next;
        	ptr->next->prev = ptr->prev;
        	ptr->prev = NULL;
        	ptr->next = NULL;
        	free(ptr);
		return (1);
	}
	ptr->prev->next = NULL;
	ptr->prev = NULL;
	ptr->next = NULL;
	free(ptr);
	return (1);
}
