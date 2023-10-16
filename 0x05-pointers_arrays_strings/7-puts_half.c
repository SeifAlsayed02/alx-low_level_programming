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

	while (str[i] != '\0')
	{
		size++;
	}
	size--;

	for (i = 0; i < (size / 2); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
