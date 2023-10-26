#include "main.h"
#include <string.h>

/**
 * _strchr -  locates a character in a string
 * @s: checker
 * @c: checker
 *
 * Return: nothing.
 */
char *_strchr(char *s, char c)
{
	int i = 0, size = strlen(s);

	while (*s)
	{
		if (*s == c)
			break;
		s++;
		i++;
	}

	if (i == size)
		return (NULL);
	else
		return (s);
}
