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
	int c1, c2, c3, c4;

	for (c1 = '0' ; c1 <= '9' ; c1++)
	{
		for (c2 = '0' ; c2 <= '9' ; c2++)
		{
			for (c3 = '0' ; c3 <= '9' ; c3++)
			{
				for (c4 = c2 + 1 ; c4 <= '9' ; c4++)
				{
					putchar(c1);
					putchar(c2);
					putchar(' ');
					putchar(c3);
					putchar(c4);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
