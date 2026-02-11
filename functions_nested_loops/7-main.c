#include <limits.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;


	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
