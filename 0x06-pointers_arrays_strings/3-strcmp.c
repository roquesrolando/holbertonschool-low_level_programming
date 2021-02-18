#include "holberton.h"
/**
 * _strcmp - compares pointers
 * @s1: 1st string
 * @s2: 2nd string
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
