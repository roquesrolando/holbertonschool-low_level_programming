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

	for (num = 0; src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}
