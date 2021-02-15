#include "holberton.h"

/**
 * swap_int - swap 2 integers
 * @a: first interger
 * @b: second interger
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
