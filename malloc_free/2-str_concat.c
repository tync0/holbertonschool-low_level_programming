#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: var
 * @s2: var
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1 = 0, size2 = 0, i;

	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
		size2 = strlen(s2);
	s = malloc(size1 + size2 + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0 ; i < size1 ; i++)
		s[i] = s1[i];
	for (i = 0 ; i < size2 ; i++)
		s[size1 + i] = s2[i];
	s[size1 + size2] = '\0';

	return (s);
}
