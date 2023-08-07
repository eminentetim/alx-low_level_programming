#include "main.h"

/**
 * create_file - Creates a new file
 *
 * @filename: Param description
 *
 * @text_content: Param description
 *
 * l: lenght
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int file, l, fileWrite;

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (l = 0; text_content[l] != '\0'; l++)
	{
	}

	fileWrite = write(file, text_content, l);

	if (fileWrite == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
