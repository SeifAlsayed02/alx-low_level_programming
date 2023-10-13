#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: number of times the character \ is printed
 *
 * Return: None.
 */
void print_diagonal(int n)
{
	int i, j, m;

	i = 0;

	while (i < n)
	{
		j = i;
		m = 0;
		while (m < j)
		{
			_putchar(' ');
			m++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n <= 0)
		_putchar('\n');
}}
