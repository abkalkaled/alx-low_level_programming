#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all types
 * @format: the list of types of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list type;
	int i = 0;
	char s;
	char *str;

	va_start(type, format);
	while (format != NULL && format[i])
	{
		s = format[i];
		switch (s)
		{
			case 'c':
				printf("%c", va_arg(type, int));
				break;
			case 'i':
				printf("%d", va_arg(type, int));
				break;
			case 'f':
				printf("%f", va_arg(type, double));
				break;
			case 's':
				str = va_arg(type, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		if ((s == 'c' || s == 'i' || s == 'f' || s == 's')
				&& format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(type);
}
