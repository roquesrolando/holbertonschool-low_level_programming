#include "holberton.h"
/**
 * *_strncpy - copy the string
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of char
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
