#include <stdio.h>

/**
 *main - Print reverse alphabet
 *Return: 0
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
