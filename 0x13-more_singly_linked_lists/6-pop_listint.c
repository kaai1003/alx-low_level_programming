#include "lists.h"
/**
 * pop_listint - delete the head node linked list
 * @head: pointer to linked list
 *
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		node = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(node);
		return (data);
	}
}
