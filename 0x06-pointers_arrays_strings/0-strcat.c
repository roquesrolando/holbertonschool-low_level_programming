#include "holberton.h"
/**
 * *_strcat - combining the two strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_lenght = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_lenght++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_lenght + i] = src[i];
	}
	dest[dest_lenght + i] = '\0';
	return (dest);
}
