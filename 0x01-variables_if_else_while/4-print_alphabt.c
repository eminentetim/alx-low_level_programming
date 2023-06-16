#include <stdio.h>

/**
 * main - is void
 * Return: is 0 success
 */
int main(void)
{
	char letters;

		for (letters = 'a'; letters <= 'z'; letters++)
		{
			if (letters != 'q' && letters != 'e')
			{
				putchar(letters);
			}
		}
			putchar('\n');
			/* great*/
			return (0);
}
