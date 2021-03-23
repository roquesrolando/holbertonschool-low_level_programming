#include "lists.h"

/**
 * find_listint_loop - find the loop
 * @head: linked list
 *
 * Return: number of nodes
 */

listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *array[1024];
	int j = 0, i = 0, nodes = 0;

	while (head)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == head)
			{
				return (head);
			}
		}
		array[i] = head;
		head = head->next;
		nodes++;
		i++;
	}
	return (NULL);
}
