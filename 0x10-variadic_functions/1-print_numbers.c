#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separates the numbers
 * @n: the numbers pass
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num = 0;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(ap, int);
			printf("%i", num);

			if (i != n - 1 && separator != 0)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
