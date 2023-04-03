#include "lists.h"

/**
 * add_nodeint - this function adds new node at the beginning
 * of a listint_t list
 * @head: double pointer pointing to the head
 * @n: number
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;
	*head = new;

	return (*head);
}
