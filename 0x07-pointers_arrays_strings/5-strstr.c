#include "holberton.h"

/**
 * _strstr - locates substring
 * @haystack: original string
 * @needle: substring
 *
 * Return: substring in the original
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i] == needle[j];)
		{
			if (needle[j] != '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
