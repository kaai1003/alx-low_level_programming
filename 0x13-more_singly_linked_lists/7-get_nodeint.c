#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer to linked list
 * @index: index of the node
 *
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (node < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else
		{
			head = head->next;
			node++;
		}
	}
	return (head);
}
