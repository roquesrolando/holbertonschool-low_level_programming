#include "holberton.h"

/**
 *
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[j] == needle[i])
			{
				return (needle);
				break;
			}
		}
	}
	return ('\0');
}
