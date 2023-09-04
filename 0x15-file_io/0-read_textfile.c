#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: const char type pointer to file to be readed
 *
 * @letters: size_t type
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileprnt;
	ssize_t fileprntRead, fileprntWrite, fileprntClose;
	char *lineBuffer;

	if (filename == NULL)
		return (0);

	lineBuffer = malloc(sizeof(char) * letters);

	if (lineBuffer == NULL)
		return (-1);

	fileprnt = open(filename, O_RDONLY);

	if (fileprnt == -1)
		return (0);

	fileprntRead = read(fileprnt, lineBuffer, letters);

	if (fileprntRead == -1)
		return (-1);

	fileprntWrite = write(STDOUT_FILENO, lineBuffer, fileprntRead);

	if (fileprntWrite == -1)
		return (-1);
	fileprntClose = close(fileprnt);

	if (fileprntClose == -1)
		return (-1);

	return (fileprntRead);
}
