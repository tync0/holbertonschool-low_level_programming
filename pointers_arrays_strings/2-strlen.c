#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: checker
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
