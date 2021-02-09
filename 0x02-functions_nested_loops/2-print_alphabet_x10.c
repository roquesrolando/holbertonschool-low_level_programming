#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet x10
 *
 */

void print_alphabetx10(void)
{
	char lowercaseletter;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (lowercaseletter = 97; lowercaseletter <= 122; lowercaseletter++)
		{
			_putchar(lowercaseletter);
		}
		_putchar('\n');
	}
}
