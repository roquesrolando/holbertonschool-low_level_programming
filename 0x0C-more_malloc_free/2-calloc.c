#include "holberton.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, lenght = 0;
	char *s;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	lenght = nmemb * size;
	s = malloc(lenght);

	if (s == 0)
		return (NULL);

	for (i = 0; i < lenght; i++)
	{
		s[i] = 0;
	}
	return (s);
}
