#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: content
 *
 * Return: 1 or -1
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char *tm;

	tm = text_content;
	if (filename == NULL)
	{
		return (-1);
	}
	else if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	while (tm[i] != '\0')
	{
		i++;
	}
	write(fd, tm, i);
	close(fd);
	return (1);
}
