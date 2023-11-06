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
	char *s = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
