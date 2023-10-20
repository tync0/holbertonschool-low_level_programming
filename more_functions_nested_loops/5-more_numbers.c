#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (c = 0 ; c <= 14 ; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
