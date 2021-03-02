#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates pointer to 2D array
 * @width: wide of array
 * @height: height of array
 *
 * Return: pointers for 2D
 */

int **alloc_grid(int width, int height)
{
	int i, j, count = 0;
	int **s;

	s = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = count;
	}
	return (s);
}
