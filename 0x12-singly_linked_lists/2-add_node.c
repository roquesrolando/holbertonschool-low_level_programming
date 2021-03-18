#include "lists.h"

/**
 * add_node - add nodes to link list
 * @head: the address
 * @str: the string
 *
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen - returns lenght of string
 * @str: string
 *
 * Return: string lenght
 */

int _strlen(const char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
