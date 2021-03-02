#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - frees the malloc pointer
* @grid: the array
* @height: height of the array
*
* Return: return free pointer
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
