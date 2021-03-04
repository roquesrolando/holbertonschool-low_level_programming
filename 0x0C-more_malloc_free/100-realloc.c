#include "holberton.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: old sized pointed to
 * @new_size: new size of block
 * Return: reallocated memor block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == 0)
			return (NULL);

		return (s);
	}
	if (new_size == 0 && ptr != 0)
	{
		free (ptr);
		return (NULL);
	}
	s = malloc(new_size);
	free (ptr);
	return (s);
}
