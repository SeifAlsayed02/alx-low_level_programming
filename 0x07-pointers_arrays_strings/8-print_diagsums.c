#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: The poniter of type int
 * @size: Number
 *
 * Return: None.
 */

void print_diagsums(int *a, int size)
{

	int dig = 0, inv_dig = 0;
	int i;

	for (i = 0; i < size; i++)
	{

		dig += a[i + (size * i)];
		inv_dig += a[(size - 1) + (size - 1) * i];

	}

	printf("%d, %d\n", dig, inv_dig);

}