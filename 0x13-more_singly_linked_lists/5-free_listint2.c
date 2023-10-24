#include "lists.h"
/**
 * free_listint2 - function to free list data
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		*temp = (**head)->next;
		free(*head);
		temp = *head;
	}
	*head = NULL;
}
