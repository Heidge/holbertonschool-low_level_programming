#include "main.h"
/**
* puts2 - function
*@str: string
*/
void puts_half(char *str)
{
	int count;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (count = len / 2; count < len; count ++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
