#include "lists.h"
/**
 * *add_node_end - unction that adds a new node at the end of a list_t list.
 * @head: the head of LL
 * @str: String pointer
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *tmp;
	int length = 0;

	if (new_end == NULL)
	{
		return (new_end);
	}
	else
	{
		length = strlen(str);
		new_end->str = strdup(str);
		new_end->len = length;
		new_end->next = NULL;
		tmp = *head;
		if (*head == NULL)
		{
			*head = new_end;
		}
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = new_end;
		}

	}
	return (new_end);
}
