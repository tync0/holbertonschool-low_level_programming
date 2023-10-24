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
	int num1 = 0, num2 = 0;

	while (*s1)
	{
		num1 += *s1;
		s1++;
	}
	while (*s2)
	{
		num2 += *s2;
		s2++;
	}

	return (num1 - num2);
}
