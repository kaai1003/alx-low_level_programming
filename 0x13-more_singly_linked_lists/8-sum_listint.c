#include "lists.h"
/**
 * sum_listint - return sum of all elements on linked list
 * @head: pointer to linked list
 *
 * Return: sum of linked list elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + (head->n);
			head = head->next;
		}
		return (sum);
	}
	else
	{
		return (0);
	}
}
