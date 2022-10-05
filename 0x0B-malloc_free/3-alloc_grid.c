#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function returns a pointer to a 2 dim array of intergers
 * each element of the grid should be initialized to 0
 * @width: row of the matrix
 * @height: column of the matrix
 * Return: NULL on failure or pointer to a the 2 dim array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	matrix = malloc(height * sizeof(*matrix));
	if (width <= 0 || height <= 0)
		return (NULL);
	if (matrix == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(**matrix));
		if (matrix[i] == 0)
		{
			while (i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matrix[i][j] =  0;
		}
	}
	return (matrix);
}
