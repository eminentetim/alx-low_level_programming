#include "lists.h"

/**
 * get_nodeint_at_index - Nth node
 *
 * @head: pointer to head node
 *
 * @index: int
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head == NULL)
	{
		return (NULL);
	break;
	}

	while (head != NULL)
	{
		if (index == i)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
