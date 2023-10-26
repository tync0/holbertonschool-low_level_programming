#include "main.h"
#include <string.h>

/**
 * _strspn -  gets the length of a prefix substring
 * @s: checker
 * @accept: checker
 *
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0, size2 = strlen(accept), c;

	while (*(s + i))
	{
		for (c = 0 ; c < size2 ; c++)
		{
			if (*(s + i) == accept[c])
			{
				count = 1;
				break;
			}
				
		}
		if (count == 0)
			break;
		count = 0;
	}

	return (i);
}
