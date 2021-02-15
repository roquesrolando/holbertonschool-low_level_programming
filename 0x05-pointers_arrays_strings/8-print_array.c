#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints contents of array
 * @arr: array to print from
 * @num: number of array
 * Return: void
 */
void print_array(int *arr, int num)
{
	int c;

	for(c = 0; c < num; c++)
			{
				printf("%d", arr[c]);

				if (c != num - 1)
				{
					printf(", ");
				}
			}

	printf("\n");
}
