#include "main.h"
#include<stdlib.h>

/**
 * free_grid - free a 2d grid
 * @grid: grid of memory
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

