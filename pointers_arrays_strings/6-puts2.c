#include "main.h"
/**
* puts2 - function
*@str: string
*/
void puts2(char *str)
{
	int count;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

		len = len - 1;

	for (count = 0; count < len; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
