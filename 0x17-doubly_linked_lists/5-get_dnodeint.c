#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The head
 * @index: index of the node to retrieve (starting from 0)
 *
 * Return: None.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int i = 0;
	dlistint_t *current = NULL;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL && i != index)
	{
		i++;
		current = current->next;
	}

	return (current);
}
