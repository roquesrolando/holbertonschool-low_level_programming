#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the argumens
 * @ac: count
 * @av: vector
 *
 * Return: return concatenate argument
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, size = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	s = malloc(sizeof(char) * (size + 1));

	if (s == 0)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
