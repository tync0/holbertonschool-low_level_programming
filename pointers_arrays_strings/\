#include "main.h"
/*
 *
 *
 *
 * */
char *leet (char *s)
{
	int i = 0, arr[5] = {79, 76, 84, 69, 65}, c, b[5] = {0, 1, 7, 3, 4};

	while (*(s + i))
	{
		for (c = 0 ; c < 5 ; c++)
		{
			if (*(s + i) == arr[c] || *(s + i) == arr[c] + 32)
			{
				*(s + i) = b[c] + '0';
			}
		}
	}
	
	return (s);
}
