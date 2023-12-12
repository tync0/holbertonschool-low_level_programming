#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 *  * read_textfile - check the code
 *   *
 *    * @filename: var
 *     * @letters: var
 *      *
 *       * Return: Always 0.
 *        */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	int f, j;
	size_t r;
	char s;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	r = read(fd, &s, 1);
	if (r == -1)
		return (0);
	for (j = 0 ; j < letters ; j++)
	{
		_putchar(s);
		i++;
		r = read(fd, &s, 1);
		if (r == 0)
			break;
	}
	return (i);
}
