#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: the string converted to int
 * Return: int converted from a string given as parameter
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10 + (s[i] - '0'));
		}
		else if (result > 0)
			break;

		i++;
	}

	if (sign < 0)
		return (-result);
	return (result);
}

/**
 * main - print first argument
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1 = _atoi(argv[1]);
	int num2 = _atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}

	printf("%d\n", num1 * num2);


	return (0);
}
