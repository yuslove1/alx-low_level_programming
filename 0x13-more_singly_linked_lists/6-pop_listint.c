#include "lists.h"

/**
 * pop_listint - this function delete the node of liststint_t
 *	linked list.
 * @head: a pointer to the address of the head
 *	of the listint_t lis
 * Return: the head node data(n) if the linked list is not 0
 *	else return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (num);
}
