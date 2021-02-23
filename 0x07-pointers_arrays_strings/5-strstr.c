#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: pointer passed
 * @needle: pointer passed
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int match = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
				match = 1;

			else
			{
				match = 0;
				break;
			}
		}
		if (match == 1)
			return (haystack += i);

	}
	return (0);
}
