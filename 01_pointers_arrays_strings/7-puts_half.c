#include "main.h"
/**
* puts_half - function
*@str: string
*/
void puts_half(char *str)
{
	int count, n;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len / 2) + 1;
	}

	for (count = n; count < len; count++)
	{
		_putchar(str[count]);

	}
	_putchar('\n');
}
