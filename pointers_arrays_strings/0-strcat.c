#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: checker
 * @src: checker
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int size1 = strlen(dest), size2 = strlen(src), j;

	for (j = 0 ; j <= size2 ; j++)
	{
		*(dest + size1 + j) = *(src + j);
	}

	return (dest);
}
