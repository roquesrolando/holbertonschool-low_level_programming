#include <stdio.h>
/*
 * main - prints fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{

	unsigned long fib1 = 1, fib2 = 2, fib3, num, count = 0;

	num = 50;

	printf("%lu, ", fib1);

	printf("%lu, ", fib2);

	count = 4;

	while (count < num)

	{
		fib3 = fib1 + fib2;

		count++;

		printf("%lu", fib3);

		fib1 = fib2;

		fib2 = fib3;
		if (count != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
