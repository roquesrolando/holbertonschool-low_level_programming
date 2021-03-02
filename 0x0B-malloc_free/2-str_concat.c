#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - combine strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: combined string
 */

char *str_concat(char *s1, char *s2)
{
	int count, count2, i, j, sum = 0;
	char *s;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (count = 0; s1[count] != '\0'; count++)
		;
	for (count2 = 0; s2[count2] != '\0'; count2++)
		;

	sum = count + count2;

	s = malloc(sizeof(char) * (sum + 1));

	if (s == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
