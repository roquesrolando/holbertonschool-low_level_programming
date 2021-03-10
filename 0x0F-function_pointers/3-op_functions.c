#include "3-calc.h"

/**
 * op_add - sum a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: total
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: total
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: total
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: total
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division of a and b
 * @a: 1st number
 * @b: 2nd number
 * Return: total
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
