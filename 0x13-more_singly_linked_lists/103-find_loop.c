#include "lists.h"

/**
 * find_listint_loop - find the loop
 * @head: linked list
 *
 * Return: number of nodes
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hold = head;
	listint_t *new = head;

	while (hold && new && new->next)
	{
		hold = hold->next;
		new = new->next->next;

		if (hold == new)
		{
			hold = head;
			while (new != hold)
			{
				hold = hold->next;
				new = new->next;
			}
			return (hold);
		}
	}
	return (NULL);
}
