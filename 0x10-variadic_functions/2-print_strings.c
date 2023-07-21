#include "variadic_functions.h"

/**
 *  print_strings - Print strings
 *
 *  @separator: String beetween numbers
 *
 *  @n: Number of args
 *
 *  Return return type
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sp;

	unsigned int i = 0;
	char *args;

	va_start(sp, n);

	while (i < n)
	{
		args = va_arg(sp, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
		i++;
	}

	putchar('\n');

	va_end(sp);
}
