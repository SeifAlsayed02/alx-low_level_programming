#include "lists.h"
/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: The head
 * @n: Value of new node
 *
 * Return: The address of the new node, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*head != NULL)
	{
		node->next = (*head);
		(*head)->prev = node;

	}
	(*head) = node;
	return (node);
}
