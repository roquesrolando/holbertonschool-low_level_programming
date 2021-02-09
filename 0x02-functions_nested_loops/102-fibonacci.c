#include <stdio.h>
/*
 * main - prints fibonacci
 *
*/

void main(void)
{

	int fib1 = 1, fib2 = 2, fib3, num, count = 0;

	num = 50;

	printf("%d\n", fib1);

	printf("%d\n", fib2);

	count = 2;

	while (count < num)

	{

		fib3 = fib1 + fib2;

		count++;

		printf("%d\n", fib3);

		fib1 = fib2;

		fib2 = fib3;

	}
}
