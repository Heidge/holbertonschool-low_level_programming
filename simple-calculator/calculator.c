#include "stdio.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;
	int num1;
	int num2;

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
			printf("Invalid choice!\n");

		else if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
		else if (choice == 1)
		{
			printf("\nA: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);
			printf("Result: %d\n\n", num1 + num2);
		}
	}
    return (0);
}
