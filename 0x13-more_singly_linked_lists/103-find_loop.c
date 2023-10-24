#include "lists.h"
/**
 * find_listint_loop - Find a loop in a linked list
 * @head: Pointer to the head of the linked list
 * Return: Address or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;/*Slow pointer*/
	listint_t *hare = head;/*Fast pointer*/

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;/*Move one step*/
		hare = hare->next->next;/*Move two steps*/
		if (tortoise == hare) /*Loop detected*/
		{
			tortoise = head;/*Move one pointer back to the head*/
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}

