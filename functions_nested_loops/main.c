#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void printnumber(int n)
{
	if(n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10)
	{
		printnumber(n / 10);
	}
	_putchar((n % 10) + '0');
}
