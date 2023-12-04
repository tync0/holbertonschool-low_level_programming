#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: var
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *head = h;

	if (!h)
		return (size);
	while (head->next)
	{
		if (head->str)
			printf("[%lu] %s\n", strlen(head->str), head->str);
		else
			printf("[0] (nil)\n");
		size++;
		head = head->next;
	}
	if (head->str)
		printf("[%lu] %s\n", strlen(head->str), head->str);
	else
		printf("[0] (nil)\n");
	return (size + 1);
}
