#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 if success, -1 if file can not be created, nor written,
 *	 nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdw, fdopen, len = 0;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdopen < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fdw = write(fdopen, text_content, len);

	close(fdopen);

	if (fdw < 0)
		return (-1);

	return (1);
}
