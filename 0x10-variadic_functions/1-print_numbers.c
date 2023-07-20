#include "variadic_functions.h"

/**
 *  print_numbers -  prints numbers sepereated by seperator
 *
 *  @seperator: String beetween numbers
 *
 *  @n: Number of args
 *
 *  Return void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list sp;

	unsigned int k;

	va_start(sp, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(sp, unsigned int));

		if (k < n - 1 && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	putchar('\n');

	va_end(sp);
}
