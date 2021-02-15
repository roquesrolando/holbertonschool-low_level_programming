#include "holberton.h"
/**
 * *_strcpy - returns the length of a string
 * @src: string
 * @dest: returns to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int num;
	int count;

	num = 0;

	for (count = 0; src[count] != '\0'; count++)
	{
		num++;
	}
	for (count = 0; count <= num; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
