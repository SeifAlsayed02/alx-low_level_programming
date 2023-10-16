#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: The poniter of type int
 * @n: The size of arr
 *
 * Return: None.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar(a[n - 1]);
	_putchar('\n');
}
