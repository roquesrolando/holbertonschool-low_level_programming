#include "holberton.h"

/**
 * _print_rev_recursion - print reverse a string
 * @s: the string
 *
 */


void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	s = s - 1;
	_putchar(*s);
}
