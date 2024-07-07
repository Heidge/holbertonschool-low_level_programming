#include <stdio.h>

/**
 *main - print alphabet
 *Return: 0
 */

int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
