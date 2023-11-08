#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: var
 * @size: var
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ptr = (int *)p;
	for (i = 0 ; i < nmemb ; i++)
		*(ptr + i) = 0;
	return (p);
}
