#include "holberton.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: character value
 */
void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
		b++;
	if ((a % 2) == 0)
	{
		for (b = a / 2; b < a; b++)
			_putchar(str[b]);
	}
	else if ((a % 2) != 0)
	{
		for (b = (a + 1) / 2; b < a; b++)
			_putchar(str[b]);
	}
	_putchar('\n');
}
