#include "main.h"
#include <stdio.h>

int print_last_digit(int number)
{

	if (number < 0)
        number = number * -1;
	number = number % 10;
	_putchar(number + '0');

	return (number);
}
