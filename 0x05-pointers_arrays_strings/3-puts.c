#include "holberton.h"
/**
 * _puts - prints the string
 * @str: character value
 */
void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != 0; num++)
		_putchar(str[num]);
	_putchar('\n');
}
