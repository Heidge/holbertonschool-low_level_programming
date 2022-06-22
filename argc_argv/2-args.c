/**
 * main - function
 *
 * @argc: number of arg
 * @argv: valor of arg
 * Return: always 0
 */
#include <stdio.h>
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		argv[i]++;
		printf("%s\n", argv[i] - 1);
	}
	return (0);
}
