#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	dlistint_t *tmp;

	if (head == NULL)
		return;
	
	node = head;
	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
}
