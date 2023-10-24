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
	int size1 = strlen(dest), size2 = strlen(src), j;

	for (j = 0 ; n >= size2 ? j <= size2 : j < n ; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
