#include "lists.h"
/**
 * free_listint2 - frees nodes of linked list and set head to NULL
 * @head: pointer to linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head != NULL)
	{
		while (*head)
		{
			node = (*head)->next;
			free(*head);
			*head = node;
		}
		head = NULL;
	}
	else
	{
		return;
	}
}
