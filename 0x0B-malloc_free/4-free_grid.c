#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function frees a 2-dim grid created by alloc_grid function.
 * @grid: pointer to pointer that points to the address of alloc_grid function.
 * @height: height of the array
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;
	new_matrix = grid;

	for (i = 0; i < height; i++)
	{
		free(new_matrix[i]);
	}
	free(new_matrix);
}
