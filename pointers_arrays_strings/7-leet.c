#include "main.h"
/*
 *
 *
 *
 * */
char *leet (char *s)
{
	int i = 0, arr[5] = {65, 69, 76, 79, 84}, c;

	while (*(s + i))
	{
		for (c = 0 ; c < 5 ; c++)
		{
			if (*(s + i) == arr[c] || *(s + i) + 32 == arr[c])
			{
				c != 2 ? *(s + i) = c + '0' : *(s + i) = '7';
			}
		}
	}
	
	return (s);
}
