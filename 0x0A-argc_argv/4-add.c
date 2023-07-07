#include "main.h"
#include <stdio.h>


/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the command line arguments
 *
 * Description: This program takes command line arguments
 * that represent numbers
 * and calculates their sum. It checks if no number
 * is passed to the program and
 * displays an error message if any of the arguments
 * contain non-digit characters.
 * Return: 0 if the program executes successfully, 1 if an error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");

	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");

				return (0);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
