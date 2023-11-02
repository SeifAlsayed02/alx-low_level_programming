#include "main.h"
/**
 * *array_range - Entry point
 * @min: number min
 * @max: number max
 *
 * Return: None.
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int size = 0;
	int m = min;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++, m++)
		ptr[i] = m;

	return (ptr);

}
