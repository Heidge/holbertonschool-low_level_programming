#include "main.h"
/**
*print_last_digit - print last digit of x
*@x: element
*Return: always 0
*/
int print_last_digit(int x)
{
	int lastdigit = x % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	putchar(lastdigit + '0');
	return (lastdigit);
}
