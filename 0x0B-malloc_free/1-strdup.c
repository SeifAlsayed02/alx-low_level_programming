#include "main.h"
/**
 * *_strdup - Entry point
 * @str: The poniter of type char
 *
 * Return: None.
 */
char *_strdup(char *str)
{
	int i;
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

	while (str[size] != '\0')
		c[i] = str[i];

	return (c);

}
