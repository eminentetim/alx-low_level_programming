#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Generates a random valid password
 * Return: 0 (Success)
 */

int main(void)
{
	char password[84];
	int i, checksum;

	srand(time(NULL));

	for (i = 0; checksum = 0; (checksum < (2772 - 122)); i++)
	{
		password[i] = rand() % 94 + 33;
		checksum += password[i];
	}

	password[i] = 2772 - checksum;

	printf("%s", password);

	return (0);
}
