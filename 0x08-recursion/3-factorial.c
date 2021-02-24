#include "holberton.h"

/**
 * factorial - prints factorial numbers
 * @n: the numbers
 *
 * Return: the factorial result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
