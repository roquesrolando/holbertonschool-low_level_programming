#include "lists.h"

/**
 * free_list - frees list
 * @head: node
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		free(head->str);
		head = head->next;
	}
	free(head);
}
