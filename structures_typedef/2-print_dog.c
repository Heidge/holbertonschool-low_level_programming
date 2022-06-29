#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	printf("%%");
	if ((*d).name == NULL && (*d).owner == NULL)
	printf("Name: (nil)\nAge: %.6f\nOwner: (nil)\n", (*d).age);
	else
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
