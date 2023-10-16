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
	char c[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 53 ; i++)
	{
		putchar(c[i]);
	}

	return (0);
}
