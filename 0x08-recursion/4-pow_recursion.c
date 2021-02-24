#include "holberton.h"

/**
 * _pow_recursion - returns x raised to y
 * @x: first integer
 * @y: exponential integer
 *
 * Return: x raised to y result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	x *= _pow_recursion(x, y - 1);

	return (x);
}
