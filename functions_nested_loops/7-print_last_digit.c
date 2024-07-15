#include "main.h"

/**
 * print_last_digit - function for print last digit of a given number
 * @number: the number to check
 * Return: last digit of number
 */
int print_last_digit(int number)
{
	number = number % 10;
	if (number < 0)
    	number = -number;
	_putchar(number + '0');

	return (number);
}
