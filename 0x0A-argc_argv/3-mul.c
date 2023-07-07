#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the
 * command-line arguments
 *
 * Return: 0 on success, 1 on error
 *
 * Description: This program multiplies two numbers
 * and prints the result.
 * If the program does not receive two arguments,
 * it prints an error message and returns 1.
 */

int main(int argc, char *argv[])
{
	int value1 = atoi(argv[1]);
	int value2 = atoi(argv[2]);
	int result = value1 * value2;

	printf("%d\n", result);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

