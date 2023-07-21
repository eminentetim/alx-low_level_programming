#include "variadic_functions.h"

/**
 *  print_all - Prints anything
 *
 *  @format: List of args passed to function
 *
 *  Return: void
 */

void print_all(const char * const format, ...)
{
	char *str;
	unsigned int k = 0, commaCheck = 0;
	va_list sp;

	va_start(sp, format);

	for (k = 0; format && format[k]; k++)
	{
		if (commaCheck)
			printf(", ");

		switch (format[k])
		{
		case 'c':
			printf("%c", va_arg(sp, int));
			break;
		case 'i':
			printf("%i", va_arg(sp, int));
			break;
		case 'f':
			printf("%f", va_arg(sp, double));
			break;
		case 's':
			str = va_arg(sp, char*);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			commaCheck = 0;
			k++;
			continue;
		}
		commaCheck = 1,	k++;
	}
	putchar('\n');
	va_end(sp);
}
