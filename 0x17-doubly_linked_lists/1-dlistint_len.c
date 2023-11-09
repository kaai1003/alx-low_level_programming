#include "lists.h"
/**
 * dlistint_len - return number elements in list
 * @h: pointer to linked list
 *
 * Return: number of elemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
