#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: checker
 * @accept: checker
 *
 * Return: int.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, size = strlen(accept), j, c = 0;

	while (*(s + i))
	{
		for (j = 0 ; j < size ; j++)
		{
			if (*(s + i) == accept[j])
			{
				c = 1;
				break;
			}
		}
		if (c == 1)
			break;
		c = 0;
		i++;
	}

	if (c == 0)
		return (NULL);
	else
		return (s + i);
}
