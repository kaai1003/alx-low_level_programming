#include "lists.h"
/**
 * *add_nodeint - add new node at the beginning of linked list
 * @head: pointer to linked list
 * @n: element to be added at linked list
 *
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint *)malloc(sizeof(listint));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
