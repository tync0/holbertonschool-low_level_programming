#include "main.h"

/**
 * times_table -  prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, x = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (j = 0 ; j < 9 ; j++)
		{
			x = x + i;
			if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (j != 8)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				 _putchar(x + '0');
				if (j != 8)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

		}
		x = 0;
		_putchar('\n');
	}
}
