#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file output to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and outputed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t i;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	k = read(fd, buf, letters);
	i = write(STDOUT_FILENO, buf, k);

	free(buf);
	close(fd);
	return (i);
}
