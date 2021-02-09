#include <stdio.h>
/**
 * main - prints fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{

	unsigned long fib1 = 1, fib2 = 2, fib3 = 0, total;


	while (fib3 <= 4000000)

	{
		fib3 = fib1 + fib2;

		printf("%lu", fib3);

		fib1 = fib2;

		fib2 = fib3;

		if ((fib3 % 2) == 0)
		{
			total += fib3;
		}
	}
	printf("%lu\n", total);
	return (0);
}

