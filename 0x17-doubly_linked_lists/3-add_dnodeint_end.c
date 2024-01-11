#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: The head
 * @n: node data
 *
 * Return: The new node, NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *end = NULL;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->prev = NULL;
	end->next = NULL;

	if (*head == NULL)
	{
		(*head) = end;
		return (end);
	}
	node = *head;
	while (node->next != NULL)
	{
		node = node->next;
	}

	end->prev = node;
	node->next = end;
	return (end);
}
