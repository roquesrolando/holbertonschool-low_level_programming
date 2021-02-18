#include "holberton.h"
/**
 * *_strncat - combining the two strings
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of characters
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
