#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to be created
 * @text_content: the content to be written into the file
 * Return: returns 1 on success, and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int len = 0;
	int wr;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
	return (-1);

	close(op);
	return (1);
}

