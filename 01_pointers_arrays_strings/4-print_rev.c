#include "main.h"
/**
* print_rev - function
*@s: string
*/
void print_rev(char *s)
{
	int count;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

		len = len - 1;

	for (count = len; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}

