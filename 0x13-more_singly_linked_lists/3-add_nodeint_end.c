#include "lists.h"
/**
 * add_nodeint_end - add node at the end of linked list
 * @head: pointer to linked list
 * @n: element to add to linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *end;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		end = *head;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (end->next != NULL)
			{
				end = end->next;
			}
			end->next = new_node;
		}
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
