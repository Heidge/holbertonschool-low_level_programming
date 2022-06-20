#include "main.h"
/**
* print_array - function
*@a: string
*@n: index of array
*/
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x < n - 1)
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
	printf("\n");
}

/**
* a ici prend la valeur de la variable array dans le fichier main
* n est le compteur dans les crochets de la variable array
* on crée x pour le compteur de la boucle, x commence à 0 donc imprime
* le array 0 puis ainsi de suite
*/
