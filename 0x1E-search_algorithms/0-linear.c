#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: the value
 *
 * Return: The index where valueis located, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	return (-1);
}
