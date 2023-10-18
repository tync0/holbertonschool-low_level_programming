#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number is checker
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int x;

	if (n >= 0)
	{
		if (x > 9)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		else
		{
			_putchar(x + '0');
		}
		for (x = n + 1 ; x <= 98 ; x++)
		{
			if (x > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x + '0');
			}
		}
	}
}
