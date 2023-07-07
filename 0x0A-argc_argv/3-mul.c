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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

