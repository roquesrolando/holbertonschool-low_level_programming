#include "holberton.h"

/**
 * _isdigit - checks for a lowercase character)
 * @c: letter tested
 * Return: 0
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{

		return (1);
	}

	else
		return (0);
}
