#include "main.h"

int main(int argc, char* argv [])
{
	int i = 0;

	while(*(argv[0] + i))
	{
		_putchar(*(argv[0] + i));
		i++;
	}
	_putchar('\n');

	return (0);
}
