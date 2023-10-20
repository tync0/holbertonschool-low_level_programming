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
	while (n > 9)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		_putchar(n % 10 + '0');
		n = n / 10;
	}
	_putchar(n % 10 + '0');
}
