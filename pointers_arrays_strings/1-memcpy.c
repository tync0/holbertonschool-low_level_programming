#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: checker
 * @src: checker
 * @n: checker
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int size2 = strlen(src), j;

	if (n >= size2)
	{
		for (j = 0 ; j <= size2 ; j++)
		{
			*(dest + j) = *(src + j);
		}

		return (dest);
	}
	else
	{
		for (j = 0 ; j < n ; j++)
		{
			*(dest + j) = *(src + j);
		}

		return (dest);
	}
}
