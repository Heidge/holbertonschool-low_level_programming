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
	printf("Simple Calculator\n");

	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		scanf("%d", &choice);

		if (choice > 4)
		{
			printf("Invalid choice\n");
		}
		else if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
	}
    return (0);
}
