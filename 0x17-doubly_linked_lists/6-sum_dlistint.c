#include "lists.h"
/**
 * sum_dlistint - calculate sum of linked list elements
 * @head: pointer to linked list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	while (head != NULL)
	{
		temp = head->next;
		sum += head->n;
		head = temp;
	}
	return (sum);
}
