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
	int c = 0;

	while (*(s + c))
	{
		if (c == 0)
		{
			if (*(s + c) >= 'a' && *(s + c) <= 'z')
				*(s + c) -= 32;
		}
		if (*(s + c) <= 34 || *(s + c) == 44)
		{
			if (*(s + c + 1) >= 'a' && *(s + c + 1) <= 'z')
				*(s + c + 1) -= 32;
		}
		else if (*(s + c) == 63 || *(s + c) == 46 || *(s + c) == 59)
		{
			if (*(s + c + 1) >= 'a' && *(s + c + 1) <= 'z')
				*(s + c + 1) -= 32;
		}
		c++;
	}

	return (s);
}
