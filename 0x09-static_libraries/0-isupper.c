#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: character in check
 * Return: 1 for uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
