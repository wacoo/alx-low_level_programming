#include "main.h"
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX strandard output.
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, size, i = 0, lt;

	size = letters;
	buf = malloc(size);
	if (filename == NULL || buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	read(fd, buf, letters);
	buf[letters] = '\0';
	i = write(1, buf, letters);
	lt = (int) letters;
	if (i == -1 || i != lt)
	{
		return (0);
	}
	
	close(fd);
	free(buf);
	return (i);
}
