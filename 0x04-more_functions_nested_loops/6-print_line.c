#include "main.h"

/**
 * print_line - printing lines
 * @n: numbers of times
 *
 * Return: void
 */

void print_line(int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	_putchar('\n');
}
