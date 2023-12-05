#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to node
 * @n: val
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *ptr = malloc(sizeof(dlistint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	if (!(*head))
	{
		*head = ptr;
		return (ptr);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = ptr;
	ptr->prev = last;
	return (ptr);
}
