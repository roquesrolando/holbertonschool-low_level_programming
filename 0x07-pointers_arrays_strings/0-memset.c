#include "holberton.h"

/**
 * *_memset - Fills memory with constant byte.
 * @s: A pointer to the memory area.
 * @b: The character to fill the memory area.
 * @n: The number of bytes
 *
 * Return: Fill memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
