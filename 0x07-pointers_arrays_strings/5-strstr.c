#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: pointer passed
 * @needle: pointer passed
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i] == needle[j]; j++)
		{
			if (needle[j] != '\0')
			{
				return (haystack + i);
			}
			else if (*needle == '\0')
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
