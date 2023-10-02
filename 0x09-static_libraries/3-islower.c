#include "main.h"
/**
 * _islower - entry point
 * @c: lowercase in check
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
