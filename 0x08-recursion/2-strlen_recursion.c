#include "holberton.h"

/**
 * _strlen_recursion - print the lenght of the string
 * @s: the string
 *
 * Return: string lenght
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
