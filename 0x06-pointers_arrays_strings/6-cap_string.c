#include "holberton.h"
/**
 * cap_string - capitalizes word
 * @a: string
 *
 * Return: changed string
 */

char *cap_string(char *a)
{
	int i = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		while (a[i] >= 'a' && a[i] <= 'z')
			if (a[i - 1] == ' ' ||
					a[i - 1] == '\n' ||
					a[i - 1] == ',' ||
					a[i - 1] == ';' ||
					a[i - 1] == '.' ||
					a[i - 1] == '!' ||
					a[i - 1] == '?' ||
					a[i - 1] == '"' ||
					a[i - 1] == '(' ||
					a[i - 1] == ')' ||
					a[i - 1] == '{' ||
					a[i - 1] == '}' ||
					a[i - 1] == '\t')
				a[i] -= 32;
			else
				i++;
	}
	return (a);
}
