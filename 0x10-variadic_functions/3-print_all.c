#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: characters
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	f_t type[] = {
		{ 'c', print_char },
		{ 'i', print_int },
		{ 'f', print_float },
		{ 's', print_string },
		{ '\0', NULL },
	};
	int i, j;
	char *separator = "";

	va_start(ap, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (type[j].function != '\0')
		{
			if (format[i] == type[j].function)
			{
				printf("%s", separator);
				type[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char - prints a character
 * @ap: list of arguments
 *
 */

void print_char(va_list ap)
{
	char letter;

	letter = va_arg(ap, int);
	printf("%c", letter);
}

/**
 * print_int - prints a number
 * @ap: list of arguments
 *
 */

void print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	printf("%d", num);
}

/**
 * print_float - prints a float number
 * @ap: list of arguments
 *
 */

void print_float(va_list ap)
{
	float num;

	num = va_arg(ap, double);
	printf("%f", num);
}

/**
 * print_string - print a entire string
 * @ap: list of argument
 *
 */

void print_string(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);

	if (string == 0)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
