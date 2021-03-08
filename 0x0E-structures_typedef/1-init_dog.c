#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Creates a dog structure
 * @d: The dog
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
