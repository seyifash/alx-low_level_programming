#include <stdio.h>
#include "main.h"


char *_buffer(char *file);
void close_file(int fd);

/**
 * _buffer - alocates 1024 bytes to a buffer
 * @file: name of the file
 *
 * Return: A pointer to the newly allocated buffer
 */
char *_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buff);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int filefrom, fileto, rd, wr;
	char *buff;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	buff = _buffer(argv[2]);
	filefrom = open(argv[1], O_RDONLY);
	rd = read(filefrom, buff, 1024);
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (filefrom == -1 || rd == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
		}

		wr = write(fileto, buff, rd);
		if (fileto == -1 || wr == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
		}

		rd = read(filefrom, buff, 1024);
		fileto = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	close_file(filefrom);
	close_file(fileto);

	return (0);
}
