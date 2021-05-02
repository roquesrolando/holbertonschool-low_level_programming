#include "lists.h"

/**
  * dlistint_len - Counts the number of elements in a linked list
  * @h: The linked list to count
  *
  * Return: Number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}
