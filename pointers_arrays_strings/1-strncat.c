#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: checker
 * @src: checker
 * @n: checker
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int size1 = strlen(dest), size2 = strlen(src), j;

	for (j = 0 ; n >=size2 ? j <= size2 : j < n ; j++)
	{
		*(dest + size1 + j) = *(src + j);
	}

	return (dest);
}
