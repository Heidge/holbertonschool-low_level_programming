#include "main.h"

#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: string printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
