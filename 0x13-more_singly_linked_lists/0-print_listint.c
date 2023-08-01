#include "lists.h"
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to the list that should be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int element;
	size_t nodes_count = 0;

	while (h != NULL)
	{
		element = h->n;
		printf("%d\n", element);
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
