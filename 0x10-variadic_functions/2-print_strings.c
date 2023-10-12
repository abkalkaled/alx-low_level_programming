#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: between strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	const char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, const char *);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
