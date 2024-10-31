#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len])
		len++;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
