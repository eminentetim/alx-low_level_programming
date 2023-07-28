#include "lists.h"

/**
* _strlen - Adds node to end of linked list
*
* @str: Pointer to struct pointer
*
* Return: Length of string
*/

int _strlen(const char *str)
{
	unsigned int l;

	for (l = 0;str[l] != '\0'; l++)
	{
	
	}
	return (l);
}

/**
* add_node_end - Adds node to end of linked list
*
* @head: Double Pointer
*
* @str: Pointer to struct pointer
*
* Return: address of the new element, or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *end_node;

	end_node = malloc(sizeof(list_t));

	while (end_node == NULL)
	{
		return (NULL);
	break;
	}
	end_node->str = strdup(str);
	end_node->len = _strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		list = *head;

		while (list->next)
		{
			list = list->next;
		}
		list->next = end_node;
	}
	return (end_node);
}
