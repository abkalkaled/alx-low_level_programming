#include "main.h"
/**
 * print_line - starts to print line
 * @n: number of times to print _
 * Return: always 0
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 2; i <= 10; i++)
{
_putchar(95);
}
_putchar('\n');
}
}

