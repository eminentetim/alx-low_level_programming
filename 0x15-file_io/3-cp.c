#include "main.h"

/**
 * main - Copies content of file to another
 *
 * @argc: int
 *
 * @argv: double pointer
 *
 * Return: Copy of file
 */


int main(int argc, char **argv)
{
	int file1, file12, filecheck;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file12 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file12 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((filecheck = read(file1, buffer, 1024)) > 0)
	{
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filecheck = write(file12, buffer, filecheck);
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (filecheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	if (close(file12) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file12), exit(100);

	return (0);
}
