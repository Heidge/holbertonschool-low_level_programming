#include <stdio.h>

/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;
	(void)argc;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
