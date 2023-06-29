#include "main.h"

/**
 * reverse_array - reverse strings.
 * @a: Pointer to the destination string.
 * @n: hold the vale of src in bytes
 * Return: Pointer to the resulting concatenated string.
 */

void reverse_array(int *a, int n)
{
	int j;
	int rev;

	for (j = 0; j < n / 2; j++)
	{
		rev = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = rev;
	}
}
