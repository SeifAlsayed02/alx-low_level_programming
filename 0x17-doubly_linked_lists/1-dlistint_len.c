#include "lists.h"
/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 * @h: The head
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *node;
	size_t size = 1;

	if (h == NULL)
		return (0);

	node = h->next;
	while (node != NULL)
	{
		node = node->next;
		size++;
	}
	return (size);
}
