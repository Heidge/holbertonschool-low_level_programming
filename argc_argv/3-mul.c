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
	int mul;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
