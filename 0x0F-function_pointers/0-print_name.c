#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function to print name
 * @f: function pointer
 * @name: name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
