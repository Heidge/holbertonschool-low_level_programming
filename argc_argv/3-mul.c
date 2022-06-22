/**
 * main - function
 *
 * @argc: number of arg
 * @argv: value of arg
 * Return: always 0
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
