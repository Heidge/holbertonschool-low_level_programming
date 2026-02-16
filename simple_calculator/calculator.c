#include "stdio.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;

    printf("Welcome to my calculator software\n\n");

	while (1)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		scanf("%d", &choice);

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
	}
    return (0);
}
