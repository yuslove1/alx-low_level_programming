#include "lists.h"

/**
 * listint_len - this function checks elements in a linked listint_t list
 * @h: head pointer
 *
 * Return: number of element in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != 0)
	{
		h = h->next;
		element++;
	}
	return (element);
}
