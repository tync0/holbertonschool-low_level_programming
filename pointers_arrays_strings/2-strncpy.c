#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: checker
 * @src: checker
 * @n: checker
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size2 = strlen(src), j;

	if (n >= size2)
	{
		for (j = 0 ; j < size2 ; j++)
		{
			*(dest + j) = *(src + j);
		}
		for (; j < n ; j++)
			*(dest + j) = '\0';
		
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
