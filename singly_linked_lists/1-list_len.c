#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len -  returns the number of elements
 * @h: var
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *head = h;

	if (!h)
		return (size);
	while (head->next)
	{
		size++;
		head = head->next;
	}
	return (size + 1);
}
