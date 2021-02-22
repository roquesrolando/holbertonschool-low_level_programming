#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination of memory
 * @src: memory to be copied
 * @n: numbers to be copied
 *
 * Return: memory copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
