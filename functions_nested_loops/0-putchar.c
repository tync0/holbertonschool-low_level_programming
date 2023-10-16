#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
