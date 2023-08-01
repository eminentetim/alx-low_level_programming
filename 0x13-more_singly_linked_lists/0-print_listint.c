#include "lists.h"

/**
 * print_listint - Prints elements of an integer list
 *
 * @h: Pointer to the head of the list
 *
 * Return: x size_t
 */
size_t print_listint(const listint_t *h)
{
	unsigned int k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
