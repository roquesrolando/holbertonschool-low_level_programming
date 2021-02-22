#include "holberton.h"

/**
 * *_strchr - locates character in string
 * @s: the string
 * @c: the character
 *
 * Return: NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
