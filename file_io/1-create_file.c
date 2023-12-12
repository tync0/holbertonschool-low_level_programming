#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * read_textfile - check the code
 *
 * @filename: var
 * @letters: var
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY);
	if (fd == 3)
	{
		if (text_content)
			write(STDIN_FILENO, text_content, strlen(text_content));
		return (0);
	}
	fd = create(filename, O_RDONLY | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(STDIN_FILENO, text_content, strlen(text_content));
	return (0);
}
