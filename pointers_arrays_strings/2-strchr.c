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

	for (; i <= size + 1 ; i++)
	{
		if (*(s + i) == c)
			break;
	}
	if (i == size + 2)
		return (NULL);
	else
		return (s + i);
}
