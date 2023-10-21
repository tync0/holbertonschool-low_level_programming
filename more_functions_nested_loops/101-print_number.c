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
	int x, i = 0, x1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	x = n;
	while (x > 99)
	{
		x /= 10;
		i++;
	}
	for (i ; i > 0 ; i--)
	{
		for (j = 1 ; j <= i - 1 ; j++)
		{
			x1 = n / 10;
		}
		x *= 10;
		int c = x1 - x;

		_putchar(c + '0');
		x += c;
		x1 = n;
	}
}
