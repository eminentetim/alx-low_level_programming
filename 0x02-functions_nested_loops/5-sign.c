#include "main.h"

/**
 * int print - sign
 * Return: 0 for 0, 1 for +,
 * and -1 for -
 */
int print _sign(int n)
{
	if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else if (n > 0)
	{
		printf("+");
		return (1);
	}
	else
	{
		printf("0");
		return (0);
	}

