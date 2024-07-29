#include "main.h"

/**
 * swap_int - function that prints every other character of a string
 * @str: string printed
 */
void puts2(char *str)
{
    int i = 0;

	for (; str[i]; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
