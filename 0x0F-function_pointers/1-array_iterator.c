#include "function_pointers.h"

/**
 * array_iterator - runs the array
 * @array: the array
 * @size: size of the array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0)
		return;
	if (action == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
