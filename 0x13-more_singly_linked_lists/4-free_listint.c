#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: pointer to linked list
 *
 * Return: nothing to return
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
