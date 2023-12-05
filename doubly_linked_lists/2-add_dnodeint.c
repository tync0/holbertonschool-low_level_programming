#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - returns the number of elements
 * @h: pointer to node
 * @n: val
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;
	if (!(*head))
		*head = ptr;
	else
		(*head)->prev = ptr;
	return (ptr);
}
