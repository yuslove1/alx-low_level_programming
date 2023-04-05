#include "lists.h"

/**
 * sum_listint - this function check through the
 *	nodes of a listint_t linked list and sum up all data(n)
 * @head: A pointer to the head of the listint_t list
 *
 * Return: the sum of nodes
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	while (head)
	{
		if (head == NULL)
		return (0);

		n += head->n;
		head = head->next;
	}
	return (n);
}
