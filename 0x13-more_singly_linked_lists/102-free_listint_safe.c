#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list
*
* @h: listint_t double pointer
*
* Return: size_t
*/

size_t free_listint_safe(listint_t **h)
{
	size_t l;
	int count;
	listint_t *head, *new_node;

	if (*h == NULL)
	{
		return (0);
	}

	head = *h;

	for (l = 0; head; l++)
	{
		count = head->next - head;
		new_node = head;
		free(new_node);

		if (count >= 0)
		{
			break;
		}
		head = head->next;
	}
	return (l);
}
