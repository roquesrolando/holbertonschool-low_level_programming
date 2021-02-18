#include "holberton.h"
/**
 * reverse_array - reverses the array
 * @a: integers to reverse
 * @n: number of characters
 */

void reverse_array(int *a, int n)
{
	int i;
	int sub;

	n--;

	for (i = 0; i <= n; i++)
	{
		sub = a[i];
		a[i] = a[n];
		a[n] = sub;
		n--;
	}

}
