#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
