#include "lists.h"
/**
 * listint_len - count number of elements on linked list
 * @h: pointer to linked list
 *
 * Return: elements count
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
