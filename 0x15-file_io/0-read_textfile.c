#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - This reads a text file print to STDOUT
 * @filename: name of the file to read
 * @letterss: numbers of letters it should reand and print
 * Return: actual numbers of letters it could read and print
 * 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	size_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);

	return (w);
}
