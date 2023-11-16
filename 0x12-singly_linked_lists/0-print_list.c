#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: List
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	char *tmp;

	while (h != NULL)
	{
		printf("[%d]", h->len);
		tmp = h->str;
		if (tmp == NULL)
			printf("%s\n", "(nil)");
		printf("%s\n", tmp);
		h = h->next;
		count++;
	}
	return (count);


}
