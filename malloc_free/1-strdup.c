#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @size: var
 * @c: var
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int size = strlen(str), i;
	char *s = malloc(size + 1);

	if (str == NULL || s == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}
