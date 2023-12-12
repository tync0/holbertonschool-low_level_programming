#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - main
 *
 * @argc: var
 * @argv: var
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int f1, f2, c1, c2;
	char str[1024];

	if (argc > 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read(f1, &str, 1024);
	write(f1, &str, 1024);
	c1 = close(f1);
	if (c1 == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	c2 = close(f2);
	if (c2 == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
