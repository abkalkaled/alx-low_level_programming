#include "lists.h"
/**
 * add_dnodeint - adds node at the head of doubly linked list
 * @head: head
 * @n: integer value argument
 * Return: address or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	*head = new_node;
	return (new_node);
}
