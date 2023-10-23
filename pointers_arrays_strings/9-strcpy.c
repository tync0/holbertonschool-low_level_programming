#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  copies the string
 * @dest: checker
 * @src: checker
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0' ; i++)
	{
		*(dest + i) = *src;
		src++;
	}
	*(dest + i + 1) = '\0';

	return (dest);
}
