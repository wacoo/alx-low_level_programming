#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies content fo one file to another
 * @c: number of arguments
 * @v: arguments
 *
 * Return: status
 *
 */
int main(int c, char *v[])
{
	int fd, size, res;
	char *buf;

	if (c != 3)
	{
		exit(97);
	}
	fd = open(v[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(fd, "Error: Can't read from %s\n", v[1]);
		exit(98);
	}
	size = lseek(fd, 0, SEEK_END);
	lseek(fd, 0, SEEK_SET);
	buf = malloc(sizeof(char) * size);
	res = read(fd, buf, size);
	if (res < 0)
	{
		dprintf(fd, "Error: Can't read from %s\n", v[1]);
		exit(98);
	}
	buf[size] = '\0';
	if (close(fd) < 0)
	{
		exit(100);
		dprintf(fd, "Error: Can't close the fd %d\n", fd);
	}
	fd = open(v[2], O_CREAT | O_WRONLY | O_TRUNC, 0600);
	res = write(fd, buf, size);
	if (fd == -1 || res < 0)
	{
		dprintf(fd, "Error: Can't write to %s\n", v[2]);
		exit(99);
	}
	if (close(fd) < 0)
	{
		exit(100);
		dprintf(fd, "Error: Can't close the fd %d\n", fd);
	}
	free(buf);
	return (0);
}
