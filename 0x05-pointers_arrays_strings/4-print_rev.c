#include "holberton.h"
/**
 * print_rev - prints a string, in reverse
 * @s: character value.
 *
 */
void print_rev(char *s)
{
	int letter;

	for (letter = 0; s[letter] != 0; letter++);
	
	letter = letter - 1;
	while (letter >= 0)
	{
		_putchar(s[letter]);
		letter--;
	}
	_putchar('\n');
}
