#include "main.h"

/**
 * print_last_digit - Prints the end digit of a number
 *
 * @n: The number to get the end digit of
 *
 * Return: The value of the end digit
 */
int print_last_digit(int n)
{

	int end_digit;

	end_digit = n % 10;

	if (end_digit > 0)
	{
		_putchar('0' +  end_digit);
	}
	return (end_digit);
}
