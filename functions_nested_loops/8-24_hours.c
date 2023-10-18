#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	char c1, c2, c3, c4;

	for (c1 = '0' ; c1 <= '2' ; c1++)
	{
		for (c2 = '0' ; c1 != '2' ? c2 <= '9' : c2 <= '3' ; c2++)
		{
			for (c3 = '0' ; c3 <= '5' ; c3++)
			{
				for (c4 = '0' ; c4 <= '9' ; c4++)
				{
					_putchar(c1);
					_putchar(c2);
					_putchar(':');
					_putchar(c3);
					_putchar(c4);
					_putchar('\n');
				}
			}
		}
	}
}
