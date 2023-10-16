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
	}

	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');



}
