#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: fill in the array
 *
 * Return: The array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}