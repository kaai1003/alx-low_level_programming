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

	while (head != NULL)
	{
		node = head;
		free(node);
		head = head->next;
	}
	head = NULL;
}
