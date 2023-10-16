#include "main.h"
/**
 * puts2 - Entry point
 * @str: The poniter of type char
 *
 * Return: None.
 */
void puts2(char *str)
{
	int size = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	size--;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (i + 2 > size)
			break;
		i += 2;

	}
	_putchar('\n');



}
