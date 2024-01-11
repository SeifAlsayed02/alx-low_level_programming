#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: The head
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node;
	size_t size = 1;

	if (h == NULL)
		return (0);

	node = h->next;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		size++;
	}
	return (size);
}
