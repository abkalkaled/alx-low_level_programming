#include "lists.h"
/**
 * add_noteint_end - add new note at the end
 * @head: pointer to the last address
 * Return: address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL; /*last node address is NULL*/
	if (*head == NULL)
		*head = newNode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}
	return (*head);
}
