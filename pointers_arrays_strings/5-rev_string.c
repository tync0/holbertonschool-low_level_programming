#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: checker
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0, j = 0, x;
	char *str = s;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	char a[i];
	for (x = i - 1; x >= 0 ; x--)
	{
		a[j] = str[x];
		j++;
	}
	s = a;
}
