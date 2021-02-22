#include "holberton.h"

/**
 * _strspn - lenght of prefix
 * @s: string
 * @accept: prefix
 *
 * Return: lenght of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;
	int lenght_accept = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
		lenght_accept++;
	}
	lenght_accept = lenght_accept - 1;
	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				count++;
				break;
			}
			else if (i == lenght_accept)
			{
				return (count);
			}
		}
	}
	return (count);
}
