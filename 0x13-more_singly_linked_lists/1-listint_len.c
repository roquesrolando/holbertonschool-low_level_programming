#include "lists.h"

/**
 *
 *
 *
 *
 */

size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
