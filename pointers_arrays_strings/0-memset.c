#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: checker
 * @b: checker
 * @n: checker
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size2 = strlen(s), j;

	if (n >= size2)
	{
		for (j = 0 ; j < size2 ; j++)
		{
			*(s + j) = b;
		}

		return (s);
	}
	else
	{
		for (j = 0 ; j < n ; j++)
			*(s + j) = b;

		return (s);
	}

}
