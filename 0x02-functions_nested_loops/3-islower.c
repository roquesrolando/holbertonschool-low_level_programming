#include "holberton.h"

/**
 * _islower - checks for a lowercase character)
 * @c: letter tested
 * Return: 0
 */
int _islower(int c)
{

	if (c > 96 && c < 122)
	{

		return (1);
	}

	else
		return (0);
}
