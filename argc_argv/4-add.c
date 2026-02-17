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

		if (s[i] < 48 || s[i] > 57 )
			return (-1);

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
	int i = 1;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	while (i < argc)
	{
		if (_atoi(argv[i]) == -1)
		{
			printf("Error\n");
			return(1);
		}
		sum += _atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
