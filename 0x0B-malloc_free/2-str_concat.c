#include "main.h"
/**
 * *str_concat - Entry point
 * @s1: The poniter of type char
 * @s2: The poniter of type char
 *
 * Return: None.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j;
	int size1 = 0;
	int size2 = 0;
	int size;
	char *c;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
	{
		c = s2;
		return (c);
	}
	else if (s2 == NULL)
	{
		c = s1;
		return (c);
	}

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	size = size1 + size2;

	c = malloc(size * sizeof(*s1) + 1);

	if (c == 0)
		return (NULL);
	for (i = 0; i < size1; i++)
		c[i] = s1[i];
	for (j = 0; j < size2; j++)
	{
		c[i] = s2[j];
		i++;
	}
	return (c);
}
