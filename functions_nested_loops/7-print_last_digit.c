#include "main.h"

/**
 * print_last_digit - function for print last digit of a given number
 * Return: last digit of number
 */
int print_last_digit(int number)
{

	if (number < 0)
        number = number * -1;
	number = number % 10;
	_putchar(number + '0');

	return (number);
}
