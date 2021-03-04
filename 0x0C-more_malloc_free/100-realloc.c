#include "holberton.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
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
