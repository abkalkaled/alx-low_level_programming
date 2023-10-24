#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n) in list
 * @head: head of the linked list
 * Return: sum of all data. If list is empty, 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
