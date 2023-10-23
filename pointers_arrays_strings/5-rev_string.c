#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: checker
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char *a;
	int c = 0;

	while (*s != '\0')
	{
		*a = *s;
		c++;
		s++;
		a++;
	}

	s--;
	for (; c > 0; c--)
	{
		*s = *(a - c);
		s--;
	}
}
