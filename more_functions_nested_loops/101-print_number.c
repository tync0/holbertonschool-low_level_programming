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
	int x, i = 0, x1, j, c, c1, c2;

	if (n < 0)
	{
		_putchar('-');
		c2 = n % 10;
		c2 = -c2;
		n = n / (-10);
	}
	x = n;
	if (x > 99)
	{
		while (x > 99)
		{
			x /= 10;
			i++;
		}
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
		for (c1 = i ; c1 > 0 ; c1--)
		{
			x1 = n;
			for (j = 1 ; j <= c1 - 1 ; j++)
			{
				x1 = x1 / 10;
			}
			x *= 10;
			c = x1 - x;
			_putchar(c + '0');
			x += c;
			x1 = n;
		}
		_putchar(c2 + '0');
	}
	else
	{
		if (x > 9)
			_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
	}
}
