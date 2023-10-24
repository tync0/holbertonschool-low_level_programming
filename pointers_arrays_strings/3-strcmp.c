#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: checker
 * @s2: checker
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	while (*s1 != *s2)
	{
		num = *s1 - *s2;
		s1++;
		s2++;
	}

	return (num);
}
