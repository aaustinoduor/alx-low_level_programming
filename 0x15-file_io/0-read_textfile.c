#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- read text file print to STDOUT.
 * @filename: Text file being read
 * @letters: Num of letters to be read
 * Return: w- actual num of bytes read and print
 *        0 when filename is NULL or function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
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
