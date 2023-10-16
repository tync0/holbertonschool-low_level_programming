#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int i;
	
	for (i = 0 ; i < 10 ; i++)
	{
		print_alphabet();
	}
}
