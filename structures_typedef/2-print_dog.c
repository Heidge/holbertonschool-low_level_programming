#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	char nul = "(nil)";

	if (d == NULL)
	printf("nothing");



	if ((*d).name == NULL || (*d).age == 0 || (*d).owner == NULL)
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", nul, (*d).age, nul);



	printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
