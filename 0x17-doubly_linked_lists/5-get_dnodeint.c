#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @h: The head
 * @index: index of the node to retrieve (starting from 0)
 *
 * Return: None.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int i;
	dlistint_t *current = head;
	
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	
	return (current);
}
