#include "lists.h"
/**
 * _strlen - returns the length of a string using recursion
 * @s: pointer that has the address of the string
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	if (*s != 0)
	{
		i = _strlen(s + 1);
		return (i++);
	}
	return (i);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string that is going to be saved in the list_t list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
