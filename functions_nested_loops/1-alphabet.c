#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet()
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
