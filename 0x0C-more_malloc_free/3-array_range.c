#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - creates array of integer
 * @min: smallest valuable
 * @max: highest value
 *
 * Return: array of interger
 */

int *array_range(int min, int max)
{
	int *s;
	int i, size = 0;

	if (min > max)
		return (NULL);

	size = max - min;

	s = malloc(sizeof(int) * (size + 1));

	if (s == 0)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
