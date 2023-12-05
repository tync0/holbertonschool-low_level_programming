#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to node
 * @n: val
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

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
	while ((*head)->next)
		*head = (*head)->next;
	(*head)->next = ptr;
	ptr->prev = *head;
	return (ptr);
}
