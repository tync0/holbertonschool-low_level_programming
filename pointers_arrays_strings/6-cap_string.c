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
		if (c == 0)
		{
			if (*(s + c) >= 'a' && *(s + c) <= 'z')
				*(s + c) -= 32;
		}
		if (*(s + c) == ' ' || *(s + c) == '\n' || *(s + c) == '\t' || *(s + c) == '?' || *(s + c) == '!')
		{
			++c;
			if (*(s + c) >= 'a' && *(s + c) <= 'z')
				*(s + c) -= 32;
		}
		c++;
	}

	return (s);
}
