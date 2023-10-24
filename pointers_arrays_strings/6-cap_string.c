#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: checker
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int c = 0, space = 0;

	while (*(s + c))
	{
		if ((space % 2 == 1) && *(s + c) >= 'a' && *(s + c) <= 'z')
			*(s + c) -= 32;
		else if (*(s + c) == ' ')
			space++;
		c++;
	}
}
