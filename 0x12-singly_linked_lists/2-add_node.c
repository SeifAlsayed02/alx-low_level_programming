#include "lists.h"
/**
 * *add_node - a function that adds a new node at the beginning of a list_t.
 * @head: the head of the LL
 * @str: String pointer
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	int length = 0;

	if (node == NULL)
	{
		return (node);
	}
	else
	{
		len = strlen(str);
		node->str = strdup(str);
		node->len = length;
		new->next = *head;
		*head = node;
	}

	return (node);

}
