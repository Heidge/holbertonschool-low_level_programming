#include "main.h"

/**
 * print_alphabet_x10 - function for print lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
