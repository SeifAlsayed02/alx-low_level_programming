#include "main.h"
/**
 * free_grid - Entry point
 * @grid: 2D int matrix
 * @height: height
 *
 * Return: None.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
