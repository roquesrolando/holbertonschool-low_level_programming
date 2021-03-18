#include "lists.h"

/**
 * list_len - counts all the nodes
 * @h: the linked list
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
