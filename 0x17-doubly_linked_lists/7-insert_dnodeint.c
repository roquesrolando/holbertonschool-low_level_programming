#include "lists.h"

/**
 *insert_dnodeint_at_index - will insert a new node in the nth position
 *@h: will point to the first position
 *@idx: will be the position we need to get
 *@n: will be the new value to add
 *Return: will return the new value
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ittr;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ittr = *h;
	if (ittr == NULL || count == idx)
	{
		new->next = ittr;
		*h = new;
		return (new);
	}

	while (ittr && ittr->next && count < idx - 1)
	{
		ittr = ittr->next;
		count++;
	}
	new->next = ittr->next;
	ittr->next = new;
	return (new);
}
