#include "holberton.h"

/**
 * _sqrt_find - find the square root of an interger
 * @n: number to find square root
 * @num: numbers to check
 *
 * Return: the square root
 */

int _sqrt_find(int n, int num)
{
	if (num * num == n)
		return (num);

	if (num * num > n)
		return (-1);

	return (_sqrt_find(n, num + 1));
}
/**
 * _sqrt_recursion - find square root of an interger
 * @n: interger to find the square root
 *
 * Return: return the square root
 */

int _sqrt_recursion(int n)
{
	int num = 0;

	if (num < 0)
		return (-1);

	if (num == 1)
		return (1);

	return (_sqrt_find(n, num));
}
