#include "main.h"
/**
*print_last_digit - print last digit of x
*@x: element
*Return: always 0
*/
int print_last_digit(int x)
{
	putchar(x % 10);
	return (x % 10);
}
