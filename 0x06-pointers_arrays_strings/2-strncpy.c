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

	for (i = 0; i != n; i++)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			dest[i] = '\0';
			break;
		}
	}
	return (dest);
}
