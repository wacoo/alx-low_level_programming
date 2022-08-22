#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * create_file - creates file
 * @filename: file name
 * @text_content: text
 *
 * Return: 1 or -1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char *tmp = text_content;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	while (*tmp != '\0')
	{
		i++;
		tmp++;
	}
	write(fd, text_content, 5);
	close(fd);
	return (1);
}
