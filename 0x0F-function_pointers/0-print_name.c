#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name
 * @f: Pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
		return;
	if (f == 0)
		return;

	f(name);
}
