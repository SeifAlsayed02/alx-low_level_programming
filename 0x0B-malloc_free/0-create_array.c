#include "main.h"
/**
 * *create_array - Entry point
 * @size: int
 * @c: variable Char
 *
 * Return: None.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
