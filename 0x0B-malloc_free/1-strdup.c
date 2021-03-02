#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to new allocated space
 * @str: pointer of the string
 *
 * Return: pointer allocated space
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
		s = malloc(sizeof(char) * j);

	if (s == 0)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
