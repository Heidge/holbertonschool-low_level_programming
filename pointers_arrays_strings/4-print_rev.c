#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * @s: string printed reversed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
