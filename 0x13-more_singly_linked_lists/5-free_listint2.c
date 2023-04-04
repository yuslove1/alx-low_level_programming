#include "lists.h"

/**
 * free_listint2 - this fuctiion frees a listint_t list
 * @head: a pointer to the address of the head of the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
	head = NULL;
}
