#include "main.h"
/**
 * puts_half - Entry point
 * @str: The poniter of type char
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int size = 0;
	int i = 0;
	int half;

	while (str[i] != '\0')
	{
		size++;
	}
	size += 1;

	if (size % 2 == 0)
		half = size / 2;
	else
		half = (size - 1) / 2;

	i = half;
	while (i < len - 1)
		_putchar(str[i++]);

	_putchar('\n');

}
