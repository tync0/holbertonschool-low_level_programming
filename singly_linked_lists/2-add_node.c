#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  adds a new node
 * @head: var
 * @str: var
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p, new = {"", 0, NULL};

	if (!str)
		return (NULL);
	new.str = strdup(str);
	p = &new;
	if (*head)
		*head = p;
	else
	{
		p->next = *head;
		*head = p;
	}
	return (p);
}
