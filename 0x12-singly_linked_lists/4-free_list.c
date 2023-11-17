#include "lists.h"
/**
 * free_list - function that  frees a list_t list.
 * @head: Head of LL
 *
 * Return: None.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
