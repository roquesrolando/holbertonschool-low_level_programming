#include "variadic_functions.h"

/**
 *
 *
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(ap, char *);

			if (string == 0)
				printf("(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && separator != 0)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
