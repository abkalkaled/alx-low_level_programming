#include "main.h"
/**
 * _isalpha - the start of the running
 * @c is the alphabet being checked for
 * Return: 1 if true, 0 toherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
