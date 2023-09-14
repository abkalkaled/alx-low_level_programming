#include "main.h"
/**
 * _isdigit _ checks for digit starts
 * @c: the digit in check
 * Return: 1 if true, 0 false
 */
int _isdigit(int c)
{
	if (c >=48 && c<= 57)
	{
		return (1);
	}
	return (0);
}
