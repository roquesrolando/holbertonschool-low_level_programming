#include "holberton.h"

/**
 * _isupper - checks for a lowercase character)
 * @c: letter tested
 * Return: 0
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{

		return (1);
	}

	else
		return (0);
}
