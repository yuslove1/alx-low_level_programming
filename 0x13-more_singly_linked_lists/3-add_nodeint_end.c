#include "lists.h"

/**
 * add_nodeint_end - this function adds new node at the end
 *	of a listint_t list
 * @head: pointer pointing to the head of listint_t
 * @n: number
 *
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tempLast, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tempLast = *head;
		while (tempLast->next != NULL)
			tempLast = tempLast->next;
		tempLast->next = new;
	}

	return (*head);
}
