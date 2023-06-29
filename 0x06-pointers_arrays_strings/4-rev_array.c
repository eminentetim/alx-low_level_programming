#include "main.h"

void reverse_array(int* a, int n)
{
	int j;
	int rev;

	for (j= 0; j < n / 2; j++)
	{
		rev = a[j];
		a[j] = a[n - j - 1];
		a[n -j - 1] =rev;
	}
}
