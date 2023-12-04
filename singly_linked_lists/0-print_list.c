#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h);
{
	size_t size = 0;
	list_t *head;

	while (head->next)
	{
		if (head->str)
			printf("[%d] %s\n", strlen(head->str), head->str);
		else
			printf("[0] (nil)");
		size++;
		head = head->str;
	}
	if (head->str)
		printf("[%d] %s\n", strlen(head->str), head->str);
	else
		printf("[0] (nil)");
	return (size + 1);
}
