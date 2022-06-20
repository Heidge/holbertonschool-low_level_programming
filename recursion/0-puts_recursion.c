#include "main.h"
/**
* _puts_recursion - function
*@s: parameter 1
*Return: result
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
