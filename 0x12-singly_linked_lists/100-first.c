#include <stdio.h>
void _myfunction(void) __attribute__((constructor));
/**
 * _myfunction - function
 */
void _myfunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
