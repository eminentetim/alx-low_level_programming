#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at nth index
 *
 * @head: Head of node
 *
 * @index: index
 *
 * Return: 1 succeed, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *next_node;
	unsigned int i = 0;

	while (*head == NULL)
	{
		return (-1);
	break;
	}

	while (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	break;
	}

	while (prev != NULL && i < index - 1)
	{
		prev = prev->next;
		i++;
	}
		if (prev == NULL || prev->next == NULL)
		{
			return (-1);
		}
		next_node = prev->next->next;
		free(prev->next);

		prev->next = next_node;
	return (1);
}
