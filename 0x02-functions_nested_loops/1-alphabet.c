#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void);

	int main(void)
	{
		print_alphabet();
		return (0);
	}

	void print_alphabet(void)
	{
		char lowercaseletter;

		for (lowercaseletter = 97; lowercaseletter <= 122; lowercaseletter++)
		{
			_putchar(lowercaseletter);
		}
		_putchar('\n');
	}
