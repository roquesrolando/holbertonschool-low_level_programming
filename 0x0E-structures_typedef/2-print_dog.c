#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the structure
 * @d: dog structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name == 0)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);

		if ((*d).age == 0.000000)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", (*d).age);

		if ((*d).owner == 0)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
	else if (d == 0)
		return;
}
