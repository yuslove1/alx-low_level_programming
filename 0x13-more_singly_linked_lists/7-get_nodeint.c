#include "lists.h"

/**
 * get_nodeint_at_index - this function check through and locate
 *	a given node of a listint_t linked list
 * @head: A a pointer pointing to the head of the listint_t list
 * @index: index of node to node to locate, index start at 0
 *
 * Return: NULL if the node does not exit otherwise the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes;

	for (nodes = 0; nodes < index; nodes++)
	{
		if (head == NULL)
		return (NULL);

		head = head->next;
	}
	return (head);
}
