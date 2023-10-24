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
	int sum, i, step;

	sum = 0;
	step = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(a + step);
		step += size + 1;
	}
	printf("%d, ", sum);

	sum = 0;
	step = 0;
	for (i = 0; i < size; i++)
	{
		step += size - 1;
		sum += *(a + step);
	}
	printf("%d\n", sum);
}
