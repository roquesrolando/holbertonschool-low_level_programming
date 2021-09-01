#include "search_algos.h"

/**
 * print_array - prints the element
 * @array: the array
 * @first: first element
 * @last: last element
 */
void print_array(int *array, int first, int last)
{
	int i;

	if (first <= last)
	{
		printf("Searching in array: %d", array[first]);
		for (i = first + 1; i <= last; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
	}
}
/**
 * binary_search - searches for the value with binary search
 * @array: the array
 * @size: size of the array
 * @value: value to find
 *
 * Return: the index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	int first = 0, last = size - 1, mid = 0;

	if (array != NULL)
	{
		print_array(array, first, last);
		while (first <= last)
		{
			mid = (first + last) / 2;
			if (array[mid] < value)
			{
				first = mid + 1;
				print_array(array, first, last);
			}
			else if (array[mid] > value)
			{
				last = mid - 1;
				print_array(array, first, last);
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
