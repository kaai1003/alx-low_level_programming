#include "lists.h"
/**
 * print_dlistint - print all elements of doubly linked list
 * @h: pointer to the head of linked list
 *
 * Return: number of elements in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		len++;
	}
	return (len);
}
