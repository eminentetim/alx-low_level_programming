#include "main.h"

/**
 * times_table - prints the 9 times table, begining with zero
 *
 * Return: void at the end
 */

void times_table(void)
{
	int m, j, result;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');

		for (j = 0; j <= 9; j++)
		{
			result = m * j;

			if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
