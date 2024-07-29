#include "main.h"

/**
 * swap_int - function that prints every other character of a string
 * @str: string printed
 */
void puts2(char *str)
{
    int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
