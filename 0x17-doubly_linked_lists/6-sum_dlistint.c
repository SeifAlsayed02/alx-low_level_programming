#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t llist.
 * @head: pointer to the head
 *
 * Return: sum of all the data in the linked list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

