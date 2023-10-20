#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: checker
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	int x, i = 0, j = 0, saygac = 1, count = 0, ae;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 9)
	{
		x = n;
		ae = 0;
		while (x >= 10)
		{
			x = n;
			x = x / 10;
			i++;
			if (x % 10 == 0)
			{
				ae = 1;
				while (x % 10 == 0)
				{
					x = x / 10;
					count++;
				}
				_putchar(x + '0');
				for (j = 0 ; j < count ; j++)
					_putchar('0');
                        	for (j = 0 ; j < i + count ; j++)
					saygac *= 10;
				n -= x * saygac;
				saygac = 1;
				i = 0;
				count = 0;
			}
		}
		if (!ae)
		{
			for (j = 0 ; j < i ; j++)
				saygac *= 10;
			n = n - x * saygac;
			saygac = 1;
			i = 0;
			_putchar(x + '0');
		}
	}
	_putchar(n + '0');
}
