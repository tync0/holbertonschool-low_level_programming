#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_file - close file
 *
 * @fd: var
 * Return: Always 0.
 */
void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd);
		exit(100);
	}
}
/**
 * read_file - read file
 *
 * @fd: var
 * @filename: var
 * Return: Always 0.
 */
void read_file(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}
/**
 * write_file - write file
 *
 * @fd: var
 * @filename: var
 * Return: Always 0.
 */
void write_file(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
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
	int f1, f2, r, w;
	char *str = malloc(1024);

	if (argc > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!str)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	read_file(f1, argv[1]);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write_file(f2, argv[2]);
	r = read(f1, str, 1024);
	do {
		read_file(r, argv[1]);

		w = write(f2, str, 1024);
		write_file(w, argv[2]);
		r = read(f1, str, 1024);
	} while (r > 0);
	read_file(r, argv[1]);
	close_file(f1);
	close_file(f2);
	return (0);
}
