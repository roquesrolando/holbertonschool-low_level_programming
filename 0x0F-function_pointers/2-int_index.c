#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: the array
 * @size: the size
 * @cmp: pointer to the function
 *
 * Return: return the index of found comparison
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0)
		return (-1);
	if (cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
