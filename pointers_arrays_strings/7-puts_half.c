#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string printed
 */
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[len])
		len++;

	for (i = (len + 1) / 2; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
