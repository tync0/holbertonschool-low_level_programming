#include "main.h"
#include <string.h>

/**
 * _strstr -  locates a substring
 * @haystack: checker
 * @needle: checker
 *
 * Return: int.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, size2 = strlen(haystack), j = 0, c = 0, size1 = strlen(needle);

	while (*(needle + i))
	{
		for (; j < size2 ; j++)
		{
			if (*(needle + i) == haystack[j])
			{
				c++;
				break;
			}
		}
		i++;
	}

	if (c != size1)
		return (NULL);
	else
		return (haystack + j - c - 1);
}
