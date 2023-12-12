#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - check the code
 *
 * @filename: var
 * @letters: var
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, len;
	char *txt;

	txt = malloc(letters);
	if (!txt || !filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(txt);
		return (0);
	}
	r = read(f, txt, letters);
	len = write(STDOUT_FILENO, txt, r);
	close(f);
	return (len);
}
