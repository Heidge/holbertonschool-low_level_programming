#include "main.h"

/**
 * print_sign - function for print symbol of a number
 * @n: the number to check
 * Return: 1 if positive, -1 if negative, 0 is n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
