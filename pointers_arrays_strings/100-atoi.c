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
	int b, i, minus = 0, size;
	unsigned int a = 0;

	size = strlen(s);
	for (i = 0; i < size; i++)
	{
		if (*(s + i) == 45)
		{
			minus += 1;
		}
		if (*(s + i) < 58 && *(s + i) > 47)
		{
			a = a * 10 + (*(s + i) - 48);
			if (i != size - 1 && (*(s + i + 1) > 57 || *(s + i + 1) < 48))
			{
				break;
			}
		}
	}
	if (minus % 2 == 1)
	{
		b = -1 * a;
	}
	else
		b = a;
	return (b);
}
