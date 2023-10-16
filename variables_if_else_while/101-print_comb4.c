#include <stdlib.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'get number'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, x, y;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (x = c + 1 ; x <= '9' ; x++)
		{
			for (y = x + 1 ; y <= '9' ; y++)
			{
				putchar(c);
				putchar(x);
				putchar(y);
				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
