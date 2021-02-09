#include "holberton.h"

/**
 * print_alphabet - prints out alphabet in lowercase letter
 */

void print_alphabet(void)
{
	char lowercase;
	
	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
