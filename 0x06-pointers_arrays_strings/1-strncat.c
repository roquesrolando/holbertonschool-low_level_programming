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
	int i;
	int dest_lenght = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_lenght++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		if (i < n)
		{
			dest[dest_lenght + i] = src[i];
		}
		if ((dest_lenght + i) < n)
		{
			dest[dest_lenght + i] = '\0';
		}
	}
	return (dest);
}
