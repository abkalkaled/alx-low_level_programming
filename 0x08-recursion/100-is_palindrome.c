#include "main.h"

/**
* _strlen - return length of string
* @str: string in check
* Return: length of str
*/
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}
/**
* checkif_palindrome - checks to see if a string is a palindrome
* @i: LHS
* @j: RHS
* @c: palindrome
* Return: 0 or 1
*/
int checkif_palindrome(int i, int j, char *c)
{
	if (i >= j)
		return (1);
	else if (c[i] != c[j])
		return (0);
	else
		return (checkif_palindrome(i + 1, j - 1, c));
}
/**
* is_palindrome - function to show if palindrome
* @s: string to check
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int a;
	
	a = _strlen(s) - 1;
	return (checkif_palindrome(0, a, s));
}
