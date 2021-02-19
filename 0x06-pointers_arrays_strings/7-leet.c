#include "holberton.h"


/**
 * leet - string 1337
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int i;
	int j;
	char array_1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char array_2[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; array_1[j] != '\0'; j++)
		{
			if (s[i] == array_1[j])
				s[i] = array_2[j];
		}
	}
	return (s);
}
