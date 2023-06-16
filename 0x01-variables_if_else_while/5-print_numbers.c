#include <stdio.h>

/**
 *main - is void
 * Return: 0 for success
 */
int main(void)
{
	int n;

	n = 0;

	while  (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	/*betty is fine*/
	return (0);
}
