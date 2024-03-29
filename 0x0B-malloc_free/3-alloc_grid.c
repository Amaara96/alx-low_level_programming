#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional arrays
 *
 * @width: The width of the integer
 *
 * @height: The height of the integer
 *
 * Return: returns 0
*/

int **alloc_grid(int width, int height)
{
	int **output;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		output[a] = malloc(sizeof(int) * width);

		if (output[a] == NULL)
		{
			free(output);
			for (b = 0; b <= height; b++)
				free(output[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			output[a][b] = 0;
	}
	return (output);
}
