#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @h: The head
 *
 * Return: Nothing
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *hold, *array[1024];
	int count = 0, i = 0, j = 0;

	while (*h != NULL)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == *h)
			{
				*h = NULL;
				count++;
				return (count);
			}
		}
		array[i] = *h;
		hold = *h;
		*h = (*h)->next;
		free(hold);
		count++;
		i++;
	}
	free(*h);
	*h = NULL;
	count++;
	return (count);
}
