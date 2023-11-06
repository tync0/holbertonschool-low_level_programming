#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: var
 * @c: var
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *s;
	unsigned int i;

	*s = malloc(size * sizeof(char));

	for (i = 0 ; i < size ; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
