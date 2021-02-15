#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length;
	int reverse;
	char sub;

	for (length = 0; s[length] != '\0'; length++)

	reverse = length - 1;
	{
		for (length = 0; length <= reverse; length++)
		{
			sub = s[length];
			s[length] = s[reverse];
			s[reverse] = sub;
			reverse--;
		}
	}
}
