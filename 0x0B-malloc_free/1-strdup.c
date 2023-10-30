#include "main.h"
/**
 * *_strdup - Entry point
 * @str: The poniter of type char
 *
 * Return: None.
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	size--;

	c = malloc(size * sizeof(*str) + 1);

	if (c == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		c[i] = str[i];

	return (c);

}
