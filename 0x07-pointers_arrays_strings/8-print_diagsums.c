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
	int i = 0;
	int main_diagonal = 0;
	int right_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		main_diagonal += a[i + (size * i)];
		right_diagonal += a[(size - 1) + (size - 1) * i];
	}

	printf("%d, %d\n", main_diagonal, right_diagonal);

}
