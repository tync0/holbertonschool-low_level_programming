#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: checker
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	unsigned int i = 0, number = 0, x = 0, j = 0, c1;

	while (!(*s >= 48 && *s <= 57))
	{
		if (*s == '-')
			i++;
		s++;
	}
	while (*s >= 48 && *s <= 57)
	{
		x++;
		s++;
	}
	for (j = x; j > 0 ; j--)
	{
		s--;
	}
	for (j = x; j > 0 ; j--)
	{
		int c = 1;

		for (c1 = j - 1 ; c1 > 0 ; c1--)
		{
			c *= 10;
		}
		number += c * (*s - '0');
		s++;
	}

	if (i % 2 == 0)
		return (number);
	else
		return (-number);
}
