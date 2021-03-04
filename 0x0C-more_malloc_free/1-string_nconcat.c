#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count, count2, i, j, sum = 0;
	char *s;

	if (s1 == 0)
		return ("");
	if (s2 == 0)
		return ("");

	for (count = 0; s1[count] != '\0'; count++)
		;
	for (count2 = 0; s2[count2] != '\0'; count2++)
		;

	if (n >= count2)
		sum = count + count2;
	else
		sum = count + n;
	
	s = malloc(sizeof(char) * (sum + 1));

	if (s == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n ; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
