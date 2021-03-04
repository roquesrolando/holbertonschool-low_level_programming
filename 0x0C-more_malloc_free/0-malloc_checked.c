#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - it checks if malloc allocated memory
 * @b: size
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == 0)
	{
		exit(98);
	}
	return (s);
}
