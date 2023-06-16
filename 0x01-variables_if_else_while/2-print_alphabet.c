#include <stdio.h>

/**
 * main - is void
 * Return:0  for success
 */
int main(void)
{
	char letters = 'a';

	while (letters != 'z' + 1)
	{
		putchar(letters);
		letters++;
	}
	/* betty my friend */
	putchar('\n');
	return (0);
}
