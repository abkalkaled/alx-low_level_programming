#include "main.h"
/**
* seek_root - find square root of n, starting from the smallest possible, 0
* _sqrt_recursion - recursion sqrt starts here
* @n: number with natural square root
* @root: finds root
* Return: natural square root, or -1 if not natural root
*/

int seek_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (seek_root(n, root + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (seek_root(n, 0));
}
