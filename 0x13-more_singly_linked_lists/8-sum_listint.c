#include "lists.h"

/**
 * sum_listint - Sum of all data (n)
 *
 * @head: Head of node
 *
 *
 * Return: void
 */

int sum_listint(listint_t *head)
{
	unsigned int l = 0;

	while (head != NULL)
	{
		l += head->n;
		head = head->next;
	}
	return (l);
}
