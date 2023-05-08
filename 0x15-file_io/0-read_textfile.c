#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read from
 * @letters: number of letters to be read from the file
 *
 * Return: returns the number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t rd;
	ssize_t wr;
	char *buf;

	if (filename == NULL)
	return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
	return (0);
	rd = read(o, buf, letters);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr  == -1 || rd == -1 || wr != rd)
	{
	free(buf);
	return (0);
	}

	free(buf);
	close(o);

	return (wr);
}
