#include "holberton.h"
/**
 * @print_alphabet - prints alphabet
 */
	void print_alphabet(void)
	{
		char lowercaseletter;

		for (lowercaseletter = 97; lowercaseletter <= 122; lowercaseletter++)
		{
			_putchar(lowercaseletter);
		}
		_putchar('\n');
	}
