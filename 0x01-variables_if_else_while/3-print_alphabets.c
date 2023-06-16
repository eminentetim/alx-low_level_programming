#include <stdio.h>

/**
 * main - is void
 * Return: 0 for success
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	/*my betty betty*/
	return (0);
}
