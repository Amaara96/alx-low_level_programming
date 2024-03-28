#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - A function that frees the 2-D grid of an array
 *
 * @grid: Points to the array created
 *
 * @height: The height of the array
 *
 * Return: returns 0
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
