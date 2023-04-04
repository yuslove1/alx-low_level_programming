#include "lists.h"

/**
 * free_listint - this fuctiion frees listint_t list
 * @head: a pointer to the head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
