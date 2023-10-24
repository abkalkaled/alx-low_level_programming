#include "lists.h"
/**
 * free_listint - function to free listint_t
 * @head: pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
