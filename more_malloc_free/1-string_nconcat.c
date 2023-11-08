#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: var
 * @s2: var
 * @n: var
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, i;
	char *ptr;

	size1 = s1 != NULL ? strlen(s1) : 0;
	size2 = s2 != NULL ? (n >= strlen(s2) ? strlen(s2) : n) : 0;
	ptr = malloc(size1 + size2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < size1 ; i++)
		ptr[i] = s1[i];
	for (i = 0 ; i < size2 ; i++)
		ptr[size1 + i] = s2[i];
	ptr[size1 + size2] = '\0';
	return (ptr);
}
