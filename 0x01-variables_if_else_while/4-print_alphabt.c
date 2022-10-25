#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in lowercase, expect for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = a;

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++
	}
	putchar('\n');
	return (0);
}
