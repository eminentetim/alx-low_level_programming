#include "lists.h"

/**
 * insert_nodeint_at_index - Add node at nth index
 *
 * @head: Head of node
 *
 * @idx: index
 *
 * @n: struct int
 *
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current_node, *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	while (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	break;
	}

	current_node = *head;

	while (current_node)
	{

		for (i = 0; i == (idx - 1); i++)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		break;
		}
		current_node = current_node->next;
	}
	free(new_node);

	return (NULL);
}
