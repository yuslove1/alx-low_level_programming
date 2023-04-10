#include "main.h"

/**
 * read_textfile - This function reads a text and prints it
 *		to the POSIX stdout.
 * @filename: pointer filename
 * @letters: the letters to print
 *
 * Return: number of letter printe. return 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);

	return (wr);
}
