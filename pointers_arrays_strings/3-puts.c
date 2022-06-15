#include "main.h"
/**
* _puts - function
*@str: string
*/
void _puts(char *str)
{
	int count = 0;

	for (count = 0; *str != '\0'; count++)
	{
		_putchar(*str);
		str++;
	}
}
