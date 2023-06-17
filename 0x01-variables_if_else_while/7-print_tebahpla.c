#include <stdio.h>

/**
 * main - is void
 * Return:0  for success
 */
int main(void)
{
	int l = 'z';

	while (l != 'a' - 1)
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	/* emmy you try*/
	return (0);
}
