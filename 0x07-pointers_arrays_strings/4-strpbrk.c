#include "holberton.h"

/**
 * _strpbrk - searches a string for bytes
 * @s: the string
 * @accept: the bytes it searches
 *
 * Return: the bytes found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
