#include "lists.h"

/**
  * free_listint2 - Frees a linked list
  * @head: The head
  *
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}

	free(*head);
	head = NULL;
}
