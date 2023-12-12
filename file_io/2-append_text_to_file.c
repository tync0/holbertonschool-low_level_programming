#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text
 *
 * @filename: var
 * @text_content: var
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
