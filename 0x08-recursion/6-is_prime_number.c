#include "holberton.h"
/**
 * prime_finder - check for prime numbers
 * @n: numbers to check
 * @num: numbers to use to check if it's prime
 *
 * Returns: if number is prime or not
 */

int prime_finder(int n, int num)
{
	if (n % num == 0)
		return (0);

	if (n / num < num)
		return (1);

	return (prime_finder(n, num + 1));
}
/**
 * is_prime_number - check if numbers are prime
 * @n: numbers to check
 *
 * Return: 1 if is prime and 0 if is not
 */

int is_prime_number(int n)
{
	int num = 2;

	if (n <= 1)
		return (0);

	return (prime_finder(n, num));
}
