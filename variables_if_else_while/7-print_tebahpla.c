#include <stdio.h>

/**
* main - Printf last digit of a random number and say if >5, =0 or less than 6
* Return: always 0
*/

int main(void)
{
	char i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
