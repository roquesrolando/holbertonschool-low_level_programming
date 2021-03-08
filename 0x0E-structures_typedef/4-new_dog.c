#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * *new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *scoobs;
	char *new_name;
	char *new_owner;

	if (name == 0)
		return (NULL);
	if (owner == 0)
		return (NULL);

	new_name = malloc((_strlen(name)) + 1);
	if (new_name == 0)
	{
		free(new_name);
		return (NULL);
	}
	new_owner = malloc((_strlen(owner)) + 1);
	if (new_owner == 0)
	{
		free(new_owner);
		free(new_name);
		return (NULL);
	}

	scoobs = malloc(sizeof(struct dog));
	if (scoobs == 0)
	{
		free(scoobs);
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	(*scoobs).name = _strcpy(new_name, name);
	(*scoobs).age = age;
	(*scoobs).owner = _strcpy(new_owner, owner);

	return (scoobs);
}
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
