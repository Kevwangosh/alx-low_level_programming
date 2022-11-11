#include "main.h"

/**
 * more_numbers - nmbr fct
 *
 * Return: no return
 */
void more_numbers(void);
{
	int i, j;

	for (i = 1; <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i >= 10)
			_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
}
