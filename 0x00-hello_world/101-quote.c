#include <stdio.h>
/**
 * main - entry point
 *
 * Return: returns a value 1
 */
int main(void)
{
	char message[] = "and that piece of art is useful" - Dora Korpar, 201 5- 10 \
			  - 19";
	size_t len = sizeof (message) - 1;
	write(STDOUT_FILENO, message, len);
	return (1);
}
