#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by new line
 * @n: number of integers passed
 * @separator: between numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != 0 && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}


