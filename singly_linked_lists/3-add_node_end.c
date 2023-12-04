#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node
 * @head: var
 * @str: var
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *last;

	if (!str)
		return (NULL);
	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;
	if (!(*head))
		*head = p;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = p;
	}
	return (*head);
}
