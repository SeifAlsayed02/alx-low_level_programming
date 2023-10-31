#include "main.h"
/**
 * **alloc_grid - Entry point
 * @width: The width
 * @height: The height
 *
 * Return: None.
 */
int **alloc_grid(int width, int height)
{

	int i;
	int j;
	int **ptr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) height);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(4 * width);

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
