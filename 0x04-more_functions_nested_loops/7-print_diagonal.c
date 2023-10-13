#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: None.
 */

void more_numbers(void)
{
	int i;
	int j;;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar(((j / 10) % 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
