#include <stdio.h>

/**
 * main - is void
 * Return:0  for success
 */
int main(void)
{
	int h;
	char l;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	/* betty betty*/
	return (0);
}
