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

	if (str == NULL)
		return (NULL);

	for (i = 1; str[i] != '\0'; i++)

		s = malloc(sizeof(char) * i);

	if (s == NULL)
		return (NULL);

	for (j = 0; s[j] < i; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
