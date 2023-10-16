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
	int c, x;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (x = c + 1 ; x <= '9' ; x++)
		{
			putchar(c);
			putchar(x);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
