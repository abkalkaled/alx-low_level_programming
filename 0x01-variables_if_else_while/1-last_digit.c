#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main - entry point 
 *
 * Return: returns a vlue of 0, end point
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);
}
