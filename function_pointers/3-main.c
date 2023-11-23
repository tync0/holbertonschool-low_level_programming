#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Struct op
 *
 * @argc: The operator
 * @argv: The function associated
 *
 * Return: var
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	a = argv[2];
	if ((*a != '+' && *a != '-' && *a != '*' && *a != '/' && *a != '%')
			|| strlen(a) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*a == '/' || *a == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(a)(num1, num2));

	return (0);
}
